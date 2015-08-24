TARGETS	= $(OBJDIR)libcpp.a $(OBJDIR)libcpp.so.0.0 $(OBJDIR)libcpp.so.0 $(OBJDIR)libcpp.so $(OBJDIR)cpp
OBJDIR	=
PREFIX	= /usr/local
DESTDIR	=
LIBDIR	= $(PREFIX)/lib
CC	= cc
CPPFLAGSF= -I ../include
CPPFLAGS=
CFLAGSF	= -W `pkg-config --cflags libSystem`
CFLAGS	= -Wall -g -O2 -pedantic
LDFLAGSF= `pkg-config --libs libSystem`
LDFLAGS	= 
AR	= ar
RANLIB	= ranlib
CCSHARED= $(CC) -shared
BINDIR	= $(PREFIX)/bin
SBINDIR	= $(PREFIX)/sbin
RM	= rm -f
LN	= ln -f
MKDIR	= mkdir -m 0755 -p
INSTALL	= install


all: $(TARGETS)

libcpp_OBJS = $(OBJDIR)cpp.o $(OBJDIR)parser.o $(OBJDIR)scanner.o
libcpp_CFLAGS = $(CPPFLAGSF) $(CPPFLAGS) $(CFLAGSF) $(CFLAGS) -fPIC
libcpp_LDFLAGS = $(LDFLAGSF) $(LDFLAGS)

$(OBJDIR)libcpp.a: $(libcpp_OBJS)
	$(AR) -rc $(OBJDIR)libcpp.a $(libcpp_OBJS)
	$(RANLIB) $(OBJDIR)libcpp.a

$(OBJDIR)libcpp.so.0.0: $(libcpp_OBJS)
	$(CCSHARED) -o $(OBJDIR)libcpp.so.0.0 -Wl,-soname,libcpp.so.0 $(libcpp_OBJS) $(libcpp_LDFLAGS)

$(OBJDIR)libcpp.so.0: $(OBJDIR)libcpp.so.0.0
	$(LN) -s -- libcpp.so.0.0 $(OBJDIR)libcpp.so.0

$(OBJDIR)libcpp.so: $(OBJDIR)libcpp.so.0.0
	$(LN) -s -- libcpp.so.0.0 $(OBJDIR)libcpp.so

cpp_OBJS = $(OBJDIR)main.o
cpp_CFLAGS = $(CPPFLAGSF) $(CPPFLAGS) $(CFLAGSF) $(CFLAGS)
cpp_LDFLAGS = $(LDFLAGSF) $(LDFLAGS) -L$(OBJDIR). -L$(LIBDIR) -Wl,-rpath,$(LIBDIR) -lcpp

$(OBJDIR)cpp: $(cpp_OBJS) $(OBJDIR)libcpp.so
	$(CC) -o $(OBJDIR)cpp $(cpp_OBJS) $(cpp_LDFLAGS)

$(OBJDIR)cpp.o: cpp.c common.h ../include/CPP.h
	$(CC) $(libcpp_CFLAGS) -o $(OBJDIR)cpp.o -c cpp.c

$(OBJDIR)parser.o: parser.c parser.h ../include/CPP.h
	$(CC) $(libcpp_CFLAGS) -o $(OBJDIR)parser.o -c parser.c

$(OBJDIR)scanner.o: scanner.c common.h ../include/CPP.h
	$(CC) $(libcpp_CFLAGS) -o $(OBJDIR)scanner.o -c scanner.c

$(OBJDIR)main.o: main.c ../include/CPP.h
	$(CC) $(cpp_CFLAGS) -o $(OBJDIR)main.o -c main.c

clean:
	$(RM) -- $(libcpp_OBJS) $(cpp_OBJS)

distclean: clean
	$(RM) -- $(TARGETS)

install: $(TARGETS)
	$(MKDIR) $(DESTDIR)$(LIBDIR)
	$(INSTALL) -m 0644 $(OBJDIR)libcpp.a $(DESTDIR)$(LIBDIR)/libcpp.a
	$(INSTALL) -m 0755 $(OBJDIR)libcpp.so.0.0 $(DESTDIR)$(LIBDIR)/libcpp.so.0.0
	$(LN) -s -- libcpp.so.0.0 $(DESTDIR)$(LIBDIR)/libcpp.so.0
	$(LN) -s -- libcpp.so.0.0 $(DESTDIR)$(LIBDIR)/libcpp.so
	$(MKDIR) $(DESTDIR)$(BINDIR)
	$(INSTALL) -m 0755 $(OBJDIR)cpp $(DESTDIR)$(BINDIR)/cpp

uninstall:
	$(RM) -- $(DESTDIR)$(LIBDIR)/libcpp.a
	$(RM) -- $(DESTDIR)$(LIBDIR)/libcpp.so.0.0
	$(RM) -- $(DESTDIR)$(LIBDIR)/libcpp.so.0
	$(RM) -- $(DESTDIR)$(LIBDIR)/libcpp.so
	$(RM) -- $(DESTDIR)$(BINDIR)/cpp

.PHONY: all clean distclean install uninstall
