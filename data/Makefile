TARGETS	= $(OBJDIR)cpp.pc
OBJDIR	=
PREFIX	= /usr/local
DESTDIR	=
RM	= rm -f
LN	= ln -f
MKDIR	= mkdir -m 0755 -p
INSTALL	= install


all: $(TARGETS)

$(OBJDIR)cpp.pc: cpp.pc.in ../config.sh
	./pkgconfig.sh -P "$(PREFIX)" -- "$(OBJDIR)cpp.pc"

clean:
	$(RM) -- $(cpp.pc_OBJS)
	./pkgconfig.sh -c -P "$(PREFIX)" -- "cpp.pc"

distclean: clean
	$(RM) -- $(TARGETS)

install: $(TARGETS)
	./pkgconfig.sh -P "$(DESTDIR)$(PREFIX)" -i -- "$(OBJDIR)cpp.pc"

uninstall:
	./pkgconfig.sh -P "$(DESTDIR)$(PREFIX)" -u -- "cpp.pc"

.PHONY: all clean distclean install uninstall
