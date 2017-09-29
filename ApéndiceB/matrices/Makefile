# Ejercicio B.12
# Genera archivos objeto, la biblioteca y el ejecutable

SRCDIR = ./src
LIBDIR = ./lib
BINDIR = ./bin

all:
	@(cd $(SRCDIR); make)
	@(cd $(LIBDIR); make)
	@(cd $(BINDIR); make)

run:
	@(cd $(BINDIR); make run)


.PHONY: clean
clean:
	@(cd $(SRCDIR); make clean)
	@(cd $(LIBDIR); make clean)
	@(cd $(BINDIR); make clean)
