TARGETS	= define.o if.o include.o
PREFIX	= /usr/local
DESTDIR	=
BINDIR	= $(PREFIX)/bin
SBINDIR	= $(PREFIX)/sbin
CXX	= ./cpp.sh
CXXFLAGS= 
RM	= rm -f
LN	= ln -f
MKDIR	= mkdir -m 0755 -p
INSTALL	= install


all: $(TARGETS)

define.o_OBJS = define.o
define.o_CXXFLAGS = $(CPPFLAGSF) $(CPPFLAGS) $(CXXFLAGS)

if.o_OBJS = if.o
if.o_CXXFLAGS = $(CPPFLAGSF) $(CPPFLAGS) $(CXXFLAGS)

include.o_OBJS = include.o
include.o_CXXFLAGS = $(CPPFLAGSF) $(CPPFLAGS) $(CXXFLAGS)

define.o: define.cpp cpp.sh
	$(CXX) $(define.o_CXXFLAGS) -c define.cpp

if.o: if.cpp cpp.sh
	$(CXX) $(if.o_CXXFLAGS) -c if.cpp

include.o: include.cpp cpp.sh
	$(CXX) $(include.o_CXXFLAGS) -c include.cpp

clean:
	$(RM) -- $(define.o_OBJS) $(if.o_OBJS) $(include.o_OBJS)

distclean: clean
	$(RM) -- $(TARGETS)

install: $(TARGETS)

uninstall:

.PHONY: all clean distclean install uninstall
