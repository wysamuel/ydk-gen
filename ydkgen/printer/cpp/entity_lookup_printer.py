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
entity_lookup_printer.py

 Prints top entity lookup map

"""
from ydkgen.printer.file_printer import FilePrinter


class EntityLookUpPrinter(FilePrinter):
    def __init__(self, ctx):
        super(EntityLookUpPrinter, self).__init__(ctx)
        self.headers = None
        self.entity_lookup = None
        self.capability_lookup = None

    def print_source(self, packages):
        packages = sorted(packages, key=lambda p: p.name)

        self._init_headers()
        self._init_insert_stmts(packages)
        self._print_headers()
        self._print_get_entity_lookup_func()

    def print_header(self, packages):
        packages = sorted(packages, key=lambda p: p.name)
        self._print_get_entity_lookup_declaration_header()
        self._print_get_entity_lookup_declaration_body(packages)
        self._print_get_entity_lookup_declaration_trailer()

    def _print_get_entity_lookup_declaration_header(self):
        self.ctx.bline()
        self.ctx.writeln('namespace ydk')
        self.ctx.writeln('{')
        self.ctx.bline()

    def _print_get_entity_lookup_declaration_body(self, packages):
        for package in packages:
            self.ctx.writeln('void augment_' + package.name + '();')

    def _print_get_entity_lookup_declaration_trailer(self):
        self.ctx.bline()
        self.ctx.writeln('}')
        self.ctx.bline()

    def _init_headers(self):
        unique_headers = set()
        self._add_common_headers(unique_headers)
        self.headers = list(sorted(unique_headers))

    def _add_common_headers(self, unique_headers):
        unique_headers.add('#include "ydk/path_api.hpp"')
        unique_headers.add('#include "ydk/types.hpp"')
        unique_headers.add('#include "ydk/entity_lookup.hpp"')
        unique_headers.add('#include "generated_entity_lookup.hpp"')

    def _init_insert_stmts(self, packages):
        entity_lookup = {}
        capability_lookup = set()
        for package in packages:
            entity_lookup[package.name] = 'augment_' + package.name + '();'
            mod_rev_tuple = self._get_module_revision(package)
            capability_lookup.add(mod_rev_tuple)
        self.entity_lookup = entity_lookup
        self.capability_lookup = capability_lookup

    def _get_module_revision(self, package):
        revision = ""
        revision_stmt = package.stmt.search_one('revision')
        if revision_stmt:
            revision = revision_stmt.arg
        module_name = package.stmt.arg

        return (module_name, revision)

    def _print_headers(self):
        for header in self.headers:
            self.ctx.writeln(header)

    def _print_get_entity_lookup_func(self):
        self._print_get_entity_lookup_func_header()
        self._print_get_entity_lookup_func_body()
        self._print_get_entity_lookup_func_trailer()

    def _print_get_entity_lookup_func_header(self):
        self.ctx.bline()
        self.ctx.writeln('namespace ydk')
        self.ctx.writeln('{')
        self.ctx.bline()
        self.ctx.writelns(["void augment_lookup_tables()",
                           "{"])

        self.ctx.bline()
        self.ctx.lvl_inc()

    def _print_get_entity_lookup_func_body(self):
        for path in self.entity_lookup:
            self._print_insert_statement(path)

        self.ctx.bline()
        self.ctx.bline()

        for (module_name, revision) in self.capability_lookup:
            self._print_push_back_statement(module_name, revision)

    def _print_insert_statement(self, path):
        self.ctx.writeln(self.entity_lookup[path])

    def _print_push_back_statement(self, module_name, revision):
        self.ctx.writeln("ydk_global_capabilities.push_back("
                         "path::Capability{std::string{\"%s\"},"
                         "\"%s\", {}, {}});"
                         % (module_name, revision))

    def _print_get_entity_lookup_func_trailer(self):
        self.ctx.lvl_dec()
        self.ctx.writelns(['}\n'] * 2)
