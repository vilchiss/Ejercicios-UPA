INCLUDEDIR = ../include

CC = cc
CFLAGS = -I$(INCLUDEDIR)

CODIGO_FUENTE = mic.c programa1_2.c
OBJETOS = mic.o programa1_2.o

$(OBJETOS): $(CODIGO_FUENTE)
	$(CC) -c $(CODIGO_FUENTE) $(CFLAGS)

.PHONY: clean

clean:
	-rm $(OBJETOS)

$(OBJETOS): $(CODIGO_FUENTE)
