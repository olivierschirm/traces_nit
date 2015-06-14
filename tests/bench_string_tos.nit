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

var n = 10
if args.not_empty then n = args.first.to_i

var s = "*"
var i = 0
while i < n do
	s = ["Je dis «", s, "» et redis «", s, "» et trois fois de plus : «", s, s, s, "».\n"].plain_to_s
	i = i + 1
end
print(s.length)
