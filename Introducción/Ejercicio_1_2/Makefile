LIBDIR = ./lib
BINDIR = ./bin
SRCDIR = ./src

.PHONY: clean run all
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
