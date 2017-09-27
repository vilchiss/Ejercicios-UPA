# Genera los archivos objeto

INCLUDEDIR = ../include

CC = cc
CFLAGS = -I$(INCLUDEDIR)

CODIGO_FUENTE =  pol_cre.c pol_esc.c pol_lee.c pol_sum.c pol_sim.c pol_mul.c
OBJETOS = pol_cre.o pol_esc.o pol_lee.o pol_sum.o pol_sim.o pol_mul.o

$(OBJETOS): $(CODIGO_FUENTE)
	$(CC) -c $(CODIGO_FUENTE) $(CFLAGS)

.PHONY: clean
clean:
	-rm $(OBJETOS)

$(OBJETOS): $(INCLUDEDIR)/pol.h $(CODIGO_FUENTE)
