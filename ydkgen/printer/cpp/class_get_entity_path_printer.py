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
class_path_printer.py

 Printer for class methods

"""
from ydkgen.api_model import Package
from ydkgen.common import has_list_ancestor, is_top_level_class, get_absolute_path_for_class, get_segment_path_for_class


class GetEntityPathPrinter(object):

    """
        Print get_entity_path method

        :attribute ctx The printer context

    """

    def __init__(self, ctx):
        self.ctx = ctx

    def print_output(self, clazz, leafs):
        """
            Print the get_entity_path method for the clazz.

            :param `api_model.Class` clazz The class object.

        """
        if not is_top_level_class(clazz) and not has_list_ancestor(clazz):
            self._print_get_entity_path_header(clazz)
            self._print_get_entity_path_body(clazz, leafs)
            self._print_get_entity_path_trailer(clazz)

    def _print_get_entity_path_header(self, clazz):
        self.ctx.writeln('std::string %s::get_absolute_path() const' % clazz.qualified_cpp_name())
        self.ctx.writeln('{')
        self.ctx.lvl_inc()

    def _print_get_entity_path_body(self, clazz, leafs):
        self.ctx.writeln('std::ostringstream path_buffer;')
        self.ctx.writeln('path_buffer << "%s" << get_segment_path();' % (get_absolute_path_for_class(clazz)))

        self.ctx.writeln('return path_buffer.str();')

    def _print_get_entity_path_trailer(self, clazz):
        self.ctx.lvl_dec()
        self.ctx.writeln('}')
        self.ctx.bline()

class GetSegmentPathPrinter(object):

    """
        Print get_segment_path method

        :attribute ctx The printer context

    """

    def __init__(self, ctx):
        self.ctx = ctx

    def print_output(self, clazz):
        """
            Print the get_entity_path method for the clazz.

            :param `api_model.Class` clazz The class object.

        """
        self._print_get_ydk_segment_path_header(clazz)
        self._print_get_ydk_segment_path_body(clazz)
        self._print_get_ydk_segment_path_trailer(clazz)

    def _print_get_ydk_segment_path_header(self, clazz):
        self.ctx.writeln('std::string %s::get_segment_path() const' % clazz.qualified_cpp_name())
        self.ctx.writeln('{')
        self.ctx.lvl_inc()


    def _print_get_ydk_segment_path_body(self, clazz):
        self.ctx.writeln('std::ostringstream path_buffer;')
        self.ctx.writeln('path_buffer << %s;' % (get_segment_path_for_class(clazz, " <<", "%s")))
        self.ctx.writeln('return path_buffer.str();')

    def _print_get_ydk_segment_path_trailer(self, clazz):
        self.ctx.lvl_dec()
        self.ctx.writeln('}')
        self.ctx.bline()

