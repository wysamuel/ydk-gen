/*  ----------------------------------------------------------------
 Copyright 2016 Cisco Systems

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
------------------------------------------------------------------*/

#include <iostream>
#include "ydk/grouping_models/bgp/bgp.h"


using namespace std;
using namespace ydk::bgp;

int main(int argc, char* argv[])
{
	Bgp bgp{};

	auto ipv4_afsf=make_unique<Bgp::Global::AfiSafis::AfiSafi>();
	ipv4_afsf->afi_safi_name = "ipv4-unicast";
	ipv4_afsf->config->afi_safi_name = "ipv4-unicast";
	ipv4_afsf->config->enabled = true;

	bgp.global_->afi_safis->afi_safi.push_back(move(ipv4_afsf));

}
