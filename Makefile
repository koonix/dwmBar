DESTDIR = /usr/local
CXXFLAGS = -O2 -march=native -std=c++11 -pthread -lX11
ifeq ($(CHASSIS),laptop)
	CXXFLAGS += -DLAPTOP
endif

dwmbar : dwmbar.cpp modules.cpp

install : dwmbar
	@cp -fv dwmbar $(DESTDIR)/bin
	@chmod 755 $(DESTDIR)/bin/dwmbar

clean :
	@rm -fv *.o dwmbar

.PHONY : install clean
