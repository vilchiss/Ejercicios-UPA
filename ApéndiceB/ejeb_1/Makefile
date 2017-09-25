# Estructura de directorios
INCLUDEDIR = ./include
LIBDIR = ./lib
BINDIR = ./bin
SRCDIR = ./src

# Para la creación de la biblioteca
AR = ar
ARFLAGS = rs

# Compilador de C
CC = cc
CFLAGS = -I$(INCLUDEDIR) -L$(LIBDIR)

# Archivos
TARGET = $(BINDIR)/pol
BIBLIOTECA = $(LIBDIR)/libpol.a
OBJETOS_BIBLIOTECA = $(SRCDIR)/pol_es.o $(SRCDIR)/pol_arit.o
OBJETOS_PROGRAMA = $(SRCDIR)/pol.o
PROGRAMAS_FUENTE = $(SRCDIR)/pol.c $(SRCDIR)/pol_es.c $(SRCDIR)/pol_arit.c

$(TARGET): $(OBJETOS_PROGRAMA) $(BIBLIOTECA)
	-mkdir $(BINDIR)
	$(CC) $(OBJETOS_PROGRAMA) $(CFLAGS) -lpol -lm -o $(TARGET)

$(OBJETOS_PROGRAMA) $(OBJETOS_BIBLIOTECA): $(PROGRAMAS_FUENTE)
	(cd $(SRCDIR); make)

$(BIBLIOTECA): $(OBJETOS_BIBLIOTECA)
	-mkdir $(LIBDIR)
	$(AR) $(ARFLAGS) $(BIBLIOTECA) $(OBJETOS_BIBLIOTECA)

$(OBJETOS_PROGRAMA) $(OBJETOS_BIBLIOTECA): $(INCLUDEDIR)/pol.h

run:
	./bin/pol

.PHONY: clean
clean:
	-rm $(TARGET)
	-rm $(BIBLIOTECA)
	-(cd $(SRCDIR); make clean)
	-rmdir $(LIBDIR)
	-rmdir $(BINDIR)
