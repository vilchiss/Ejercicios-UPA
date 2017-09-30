# Ejercicio B.12
# Genera archivos objeto, la biblioteca y el ejecutable

SRCDIR = ./src
LIBDIR = ./lib
BINDIR = ./bin
DOCDIR = ./doc

.PHONY: clean run all doc
all:
	@(cd $(SRCDIR); make)
	@(cd $(LIBDIR); make)
	@(cd $(BINDIR); make)

run:
	@(cd $(BINDIR); make run)


clean:
	@(cd $(SRCDIR); make clean)
	@(cd $(LIBDIR); make clean)
	@(cd $(BINDIR); make clean)

doc:
	man --manpath=./doc ./doc/multiplicar_matrices.3p
