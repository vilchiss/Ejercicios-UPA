# Genera los archivos objeto necesarios para la biblioteca

INCLUDEDIR = ../include

CC = cc
CFLAGS = -I$(INCLUDEDIR)

CODIGO_FUENTE = matriz.c complejo.c
OBJETOS = matriz.o complejo.o

$(OBJETOS): $(CODIGO_FUENTE)
	$(CC) -c $(CODIGO_FUENTE) $(CFLAGS)

.PHONY: clean

clean:
	-rm $(OBJETOS)

$(OBJETOS): $(INCLUDEDIR)/matriz.h $(INCLUDEDIR)/complejo.h
