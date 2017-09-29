# Genera la biblioteca libmat.a

SRCDIR = ../src
INCLUDEDIR = ../include

AR = ar
ARFLAGS = rs

BIBLIOTECA = libmat.a
OBJETOS = $(SRCDIR)/matriz.o $(SRCDIR)/complejo.o

$(BIBLIOTECA): $(OBJETOS)
	$(AR) $(ARFLAGS) $(BIBLIOTECA) $(OBJETOS)

.PHONY: clean

clean:
	-rm $(BIBLIOTECA)

$(BIBLIOTECA): $(INCLUDEDIR)/matriz.h $(INCLUDEDIR)/complejo.h
