# Crea la biblioteca libpol.a, con un índice de símbolos

SRCDIR = ../src

AR = ar
ARFLAGS = rs

BIBLIOTECA = libpol.a
OBJETOS_BIBLIOTECA = $(SRCDIR)/pol_cre.o $(SRCDIR)/pol_esc.o \
					 $(SRCDIR)/pol_lee.o $(SRCDIR)/pol_mul.o \
					 $(SRCDIR)/pol_sum.o $(SRCDIR)/pol_sim.o

$(BIBLIOTECA): $(OBJETOS_BIBLIOTECA)
	$(AR) $(ARFLAGS) $(BIBLIOTECA) $(OBJETOS_BIBLIOTECA)

.PHONY: clean
clean:
	-rm $(BIBLIOTECA)

$(BIBLIOTECA): $(OBJETOS)
