# Genera el archivo ejecutable

SRCDIR = ../src
LIBDIR = ../lib
INCLUDEDIR = ../include

CC = cc
CFLAGS = -L$(LIBDIR) -I$(INCLUDEDIR)

EJECUTABLE = pol
CODIGO_FUENTE = $(SRCDIR)/pol.c

$(EJECUTABLE): $(CODIGO_FUENTE)
	$(CC)  $(CODIGO_FUENTE) $(CFLAGS) -lpol -o $(EJECUTABLE)

.PHONY: clean
clean:
	-rm $(EJECUTABLE)

$(CODIGO_FUENTE): $(INCLUDEDIR)/pol.h
