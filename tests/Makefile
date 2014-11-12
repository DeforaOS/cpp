TARGETS	= $(OBJDIR)define.o $(OBJDIR)if.o $(OBJDIR)include.o
OBJDIR	=
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

define.o_OBJS = $(OBJDIR)define.o
define.o_CXXFLAGS = $(CPPFLAGSF) $(CPPFLAGS) $(CXXFLAGS)

if.o_OBJS = $(OBJDIR)if.o
if.o_CXXFLAGS = $(CPPFLAGSF) $(CPPFLAGS) $(CXXFLAGS)

include.o_OBJS = $(OBJDIR)include.o
include.o_CXXFLAGS = $(CPPFLAGSF) $(CPPFLAGS) $(CXXFLAGS)

$(OBJDIR)define.o: define.cpp cpp.sh
	$(CXX) $(define.o_CXXFLAGS) -o $(OBJDIR)define.o -c define.cpp

$(OBJDIR)if.o: if.cpp cpp.sh
	$(CXX) $(if.o_CXXFLAGS) -o $(OBJDIR)if.o -c if.cpp

$(OBJDIR)include.o: include.cpp cpp.sh
	$(CXX) $(include.o_CXXFLAGS) -o $(OBJDIR)include.o -c include.cpp

clean:
	$(RM) -- $(define.o_OBJS) $(if.o_OBJS) $(include.o_OBJS)

distclean: clean
	$(RM) -- $(TARGETS)

install: $(TARGETS)

uninstall:

.PHONY: all clean distclean install uninstall
