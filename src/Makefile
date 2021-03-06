# Copyright (C) 2018 Toshinori Sato (@overlast)
#
#       https://github.com/neologd/namelti
#
# Licensed under the Apache License, Version 2.0 (the &quot;License&quot;);
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#       http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an &quot;AS IS&quot; BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

LIB_DEST = /usr/local/lib
LIB_NAME = libnamelti
MAJOR_VERSION = 0
MINOR_VERSION = 1
LIB_DIR = ../lib
LIB_FILE = $(LIB_NAME).so.$(MAJOR_VERSION).$(MINOR_VERSION)

INCLUDE_DEST = /usr/local/include
INCLUDE_HEADERS = *.h

lib: $(LIB_FILE)
all: lib

CXX := g++
CXXFLAGS := -Wall -Wextra -O3 -std=c++11 -isystem../include `mecab-config --cflags`
CXXLIBS := `mecab-config --libs`
CXXEXTRA :=
ifeq ($(UNAME_S),Darwin)
	CXXEXTRA := -Wl,-install_name,$(LIB_NAME).so
endif

debug: CXXFLAGS += -DDEBUG -g
debug: lib

SRCS = $(wildcard *.cc)
OBJS = $(patsubst %.cc,%.o,$(SRCS))
DEPS = $(patsubst %.cc,%.d,$(SRCS))

$(LIB_FILE): $(OBJS)
	$(CXX) $(CXXLIBS) -shared $(CXXEXTRA) -o $(LIB_FILE) $(OBJS)

install:
	mkdir -p $(INCLUDE_DEST)/namelti/
	install -p $(INCLUDE_HEADERS) $(INCLUDE_DEST)/namelti/
	install -p $(LIB_FILE) $(LIB_DEST)/
	ln -fs $(LIB_DEST)/$(LIB_FILE) $(LIB_DEST)/$(LIB_NAME).so.$(MAJOR_VERSION)
	ln -fs $(LIB_DEST)/$(LIB_NAME).so.$(MAJOR_VERSION) $(LIB_DEST)/$(LIB_NAME).so

uninstall:
	$(RM) -rf $(INCLUDE_DEST)/namelti
	$(RM) -f $(LIB_DEST)/$(LIB_NAME).so $(LIB_DEST)/$(LIB_NAME).so.$(MAJOR_VERSION) $(LIB_DEST)/$(LIB_FILE)

clean:
	$(RM) $(OBJS) $(DEPS) $(LIB_FILE)

.PHONY: clean lib all debug

.cc.o:
	$(CXX) $(CXXFLAGS) -c -fPIC $<

%.d: %.cc
	@set -e; $(CXX) -MM $(CXXFLAGS) $< \
	| sed 's/\($*\)\.o[ :]*/\1.o $@ : /g' > $@; \
	[ -s $@ ] || rm -f $@
-include $(DEPS)
