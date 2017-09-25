INCLUDEDIR = ../include
CC = cc
CFLAGS = -I$(INCLUDEDIR)
ARCHIVOS_PROGRAMA = pol.c pol_arit.c pol_es.c
OBJETOS_PROGRAMA = pol.o pol_es.o pol_arit.o

OBJETOS_PROGRAMA: $(ARCHIVOS_PROGRAMA)
	$(CC) -c $(ARCHIVOS_PROGRAMA) $(CFLAGS)

clean:
	rm $(OBJETOS_PROGRAMA)
