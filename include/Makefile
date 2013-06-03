PREFIX	= /usr/local
DESTDIR	=
RM	= rm -f
LN	= ln -f
MKDIR	= mkdir -m 0755 -p
INSTALL	= install
INCLUDEDIR= $(PREFIX)/include


all:

clean:

distclean: clean

install:
	$(MKDIR) $(DESTDIR)$(INCLUDEDIR)/Devel
	$(INSTALL) -m 0644 CPP.h $(DESTDIR)$(INCLUDEDIR)/Devel/CPP.h

uninstall:
	$(RM) -- $(DESTDIR)$(INCLUDEDIR)/Devel/CPP.h

.PHONY: all clean distclean install uninstall
