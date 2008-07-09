# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2008 Jean Privat <jean@pryen.org>
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Compute and generate tables for classes and modules.
package compiling

import compiling_base
private import compiling_methods
private import compiling_global
private import syntax

redef class MMSrcModule
	# Compile the program
	# Generate all sep files (_sep.[ch]), the main file (_table.c) and the build file (_build.sh)
	# Then execute the build.sh
	meth compile_prog_to_c(tc: ToolContext)
	do
		for m in mhe.greaters_and_self do
			assert m isa MMSrcModule
			m.local_analysis(tc)
		end

		var ga = global_analysis(tc)

		tc.base_dir.mkdir

		var files = new Array[String]
		var includes = new ArraySet[String]
		files.add("$CLIBDIR/nit_main.c")
		for m in mhe.greaters_and_self do
			assert m isa MMSrcModule
			files.add("{tc.base_dir}/{m.name}.{tc.ext_prefix}_sep.c")
			m.compile_separate_module(tc, ga)
			var native_name = m.filename.strip_extension(".nit")
			if (native_name + "_nit.h").file_exists then
				includes.add("-I {native_name.dirname}")
			end
			native_name.append("_nit.c")
			if native_name.file_exists then files.add(native_name)
		end

		files.add("{tc.base_dir}/{name}.{tc.ext_prefix}_tables.c")
		compile_main(tc, ga)

		var fn = "{tc.base_dir}/{name}.{tc.ext_prefix}_build.sh"
		var f = new OFStream.open(fn)
		f.write("#!/bin/sh\n")
		f.write("CLIBDIR=\"{tc.clibdir}\"\n")
		f.write("{tc.bindir}/gccx -d {tc.base_dir} -I $CLIBDIR {includes.join(" ")}")
		if tc.output_file != null then 
			f.write(" -o {tc.output_file}")
		else if tc.ext_prefix.is_empty then
			f.write(" -o {name}")
		else
			f.write(" -o {name}_{tc.ext_prefix}")
		end
		if tc.boost then f.write(" -O")
		f.write(" \"$@\" \\\n  {files.join("\\\n  ")}\n")
		f.close

		if not tc.no_cc then 
			sys.system("sh {fn}")
		end
	end

	# Compile the main file
	private meth compile_main(tc: ToolContext, ga: GlobalAnalysis)
	do
		var v = new CompilerVisitor(self)
		v.tc = tc
		v.global_analysis = ga
		v.add_decl("#include <nit_common.h>")
		compile_tables_to_c(v)
		compile_main_part(v)
		var f = new OFStream.open("{tc.base_dir}/{name}.{tc.ext_prefix}_tables.c")
		for m in mhe.greaters_and_self do
			f.write("#include \"{m.name}.{tc.ext_prefix}_sep.h\"\n")
		end
		f.write(v.to_s)
		f.close
	end

	# Compile the sep files (of the current module only)
	private meth compile_separate_module(tc: ToolContext, ga: GlobalAnalysis)
	do
		var v = new CompilerVisitor(self)
		v.tc = tc
		v.global_analysis = ga
		v.add_decl("#include <nit_common.h>")
		var native_name = filename.strip_extension(".nit")
		native_name.append("_nit.h")
		if native_name.file_exists then v.add_decl("#include <{native_name.basename("")}>")
		declare_class_tables_to_c(v)
		compile_mod_to_c(v)
		var f = new OFStream.open("{tc.base_dir}/{name}.{tc.ext_prefix}_sep.h")
		f.write("#ifndef {name}_{tc.ext_prefix}_sep\n")
		f.write("#define {name}_{tc.ext_prefix}_sep\n")
		for m in mhe.direct_greaters do f.write("#include \"{m.name}.{tc.ext_prefix}_sep.h\"\n")
		f.write(v.ctx.decls.join("\n"))
		f.write("\n#endif\n")
		f.close
		var f = new OFStream.open("{tc.base_dir}/{name}.{tc.ext_prefix}_sep.c")
		f.write("#include \"{name}.{tc.ext_prefix}_sep.h\"\n")
		f.write(v.ctx.instrs.join("\n"))
		f.write("\n")
		f.close
	end
end

