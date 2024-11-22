
#
# If not stated otherwise in this file or this component's LICENSE file the
# following copyright and licenses apply:
#
# Copyright 2019 RDK Management
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#


EXTRA_CXXFLAGS = -Wno-attributes -Wall -g -fpermissive -std=c++1y -fPIC
EXTRA_LDFLAGS = -lgstreamer-1.0 -lglib-2.0 -Wl,-rpath=../../,-rpath=./

SOURCES = rdk_gstreamer_utils_soc.cpp
EXTRA_LDFLAGS  += -lgstapp-1.0


OBJS=$(addsuffix .o, $(basename $(SOURCES)))
LIBRDKGSTREAMERUTILS_LIB=librdkgstreamerutilsplatform.so

.phony: lib clean


lib: $(LIBRDKGSTREAMERUTILS_LIB)

%.o: %.cpp
	 @echo Compiling $<...
	 $(CXX) -c $< $(EXTRA_CXXFLAGS) $(CXXFLAGS) $(PLATFORM_FLAGS) -o $@

$(LIBRDKGSTREAMERUTILS_LIB):  $(OBJS)
	@echo Dynamic library creating $(OBJS) ...
	$(CXX) $(OBJS) $(EXTRA_LDFLAGS) -shared -fPIC -o $@
clean:
	@rm -rf $(LIBRDKGSTREAMERUTILS_LIB)
cleanall:
	@rm -rf $(LIBRDKGSTREAMERUTILS_LIB) *.o
