# Ejercicio B.7
# Genera archivos objeto, la biblioteca y el ejecutable

SRCDIR = ./src
LIBDIR = ./lib
BINDIR = ./bin

EJECUTABLE = pol

all:
	(cd $(SRCDIR); make)
	(cd $(LIBDIR); make)
	(cd $(BINDIR); make)

run:
	(cd $(BINDIR); ./$(EJECUTABLE))

# Ejercicio B.9
.PHONY: limpiar doc
limpiar:
	(cd $(SRCDIR); make clean)
	(cd $(LIBDIR); make clean)
	(cd $(BINDIR); make clean)

doc:
	man --manpath=./doc ./doc/escribir_polinomio.3p
