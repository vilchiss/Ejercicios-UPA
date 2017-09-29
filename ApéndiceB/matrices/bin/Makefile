# Genera el archivo ejecutable

SRCDIR = ../src
LIBDIR = ../lib
INCLUDEDIR = ../include

CC = cc
CFLAGS = -L$(LIBDIR) -I$(INCLUDEDIR)

EJECUTABLE = cmat
CODIGO_FUENTE = $(SRCDIR)/cmat.c

$(EJECUTABLE): $(CODIGO_FUENTE)
	$(CC)  $(CODIGO_FUENTE) $(CFLAGS) -lmat -o $(EJECUTABLE)

.PHONY: clean run
clean:
	-rm $(EJECUTABLE)

run:
	@./$(EJECUTABLE)

$(CODIGO_FUENTE): $(INCLUDEDIR)/matriz.h
