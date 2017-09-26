# Para la creación de la biblioteca
AR = ar
ARFLAGS = rs # s para el índice de símbolos

# Compilador de C
CC = cc
CFLAGS = -L./

# Archivos
TARGET = pol
BIBLIOTECA = libpol.a
OBJETOS_BIBLIOTECA = pol_lee.o pol_cre.o pol_esc.o \
					 pol_mul.o pol_sum.o pol_sim.o
OBJETOS_PROGRAMA = pol.o
PROGRAMAS_FUENTE = pol.c pol_cre.c pol_lee.c pol_esc.c \
				   pol_mul.c pol_sum.c pol_sim.c

$(TARGET): $(OBJETOS_PROGRAMA) $(BIBLIOTECA)
	$(CC) $(OBJETOS_PROGRAMA) $(CFLAGS) -lpol -lm -o $(TARGET)

$(OBJETOS_PROGRAMA) $(OBJETOS_BIBLIOTECA): $(PROGRAMAS_FUENTE)
	$(CC) -c $(PROGRAMAS_FUENTE) $(CFLAGS)

$(BIBLIOTECA): $(OBJETOS_BIBLIOTECA)
	$(AR) $(ARFLAGS) $(BIBLIOTECA) $(OBJETOS_BIBLIOTECA)

$(OBJETOS_PROGRAMA) $(OBJETOS_BIBLIOTECA): pol.h

run:
	./pol

.PHONY: clean
clean:
	-rm $(TARGET)
	-rm $(OBJETOS_PROGRAMA) $(OBJETOS_BIBLIOTECA)
	-rm $(BIBLIOTECA)

.PHONY: visualizar
visualizar:
	@echo "\n\n************ Ejercicio B.4 ************"
	-nm -s ./libpol.a
	@echo "\n\n************ Ejercicio B.5 ************"
	-nm ./pol
