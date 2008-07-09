# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Copyright 2004-2008 Jean Privat <jean@pryen.org>
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

import kernel

class Client
	attr _budjet: Int # 
	meth regarde(t: Tableau)
	do
		if t.joli and dans_mes_moyens(t.etiquette.prix) then
			achette(t)
		end
	end
	meth achette(t: Tableau) is abstract
	meth dans_mes_moyens(i: Int): Bool
	do
		return i < _budjet
	end
end

class Tableau
	meth joli: Bool is abstract
	meth etiquette: Etiquette is abstract
end

class Etiquette
	meth prix: Int is abstract
end
