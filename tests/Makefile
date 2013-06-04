TARGETS	= if.o
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

if.o_OBJS = if.o
if.o_CXXFLAGS = $(CPPFLAGSF) $(CPPFLAGS) $(CXXFLAGS)

if.o: if.cpp cpp.sh
	$(CXX) $(if.o_CXXFLAGS) -c if.cpp

clean:
	$(RM) -- $(if.o_OBJS)

distclean: clean
	$(RM) -- $(TARGETS)

install: $(TARGETS)

uninstall:

.PHONY: all clean distclean install uninstall
