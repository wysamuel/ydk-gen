#  ----------------------------------------------------------------
# Copyright 2016 Cisco Systems
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#    http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
# ------------------------------------------------------------------

"""
language_factory.py
 
 Returns printer
 
"""
from ydkgen.printer import PythonModulePrinter, CPlusPlusPrinter


class LanguageFactory(object):
        
    def get_printer(self, language):
        if language == 'cplusplus':
            return CPlusPlusPrinter
        if language == 'python':
            return PythonModulePrinter
        else:
            raise Exception('Language {0} not yet supported'.format(language))
