SRCDIR = ../src
INCLUDEDIR = ../include
LIBDIR = ../lib

EJECUTABLE = programa1_2
OBJETOS = $(SRCDIR)/programa1_2.o

CC = cc
CFLAGS = -L$(LIBDIR) -I$(INCLUDEDIR)

$(EJECUTABLE): $(OBJETOS)
	$(CC) $(OBJETOS) $(CFLAGS) -lmic -o $(EJECUTABLE)

.PHONY: clean

clean:
	-rm $(EJECUTABLE)

run:
	./$(EJECUTABLE)

$(EJECUTABLE): $(OBJETOS)
