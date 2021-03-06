# This file is part of NIT ( http://www.nitlanguage.org ).
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

import core::kernel

redef class Int
	fun a: Int do return 10*self+self.abs
end

fun foo(a: Int): Int do
	a.output
	return a
end
fun bar(a: Int) do a.output

foo 1.a
foo(1.a)
foo (1).a
foo(1).a
foo((1).a)

'\n'.output

bar 1.a
bar(1.a)
#alt1#bar (1).a
#alt1#bar(1).a
bar((1).a)
