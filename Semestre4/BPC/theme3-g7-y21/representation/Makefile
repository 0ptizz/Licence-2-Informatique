CFLAGS=-ansi -Wall -pedantic

all: input output exo_8

input: input.o

output: output.o

input.o: input.c commun.h

output.o: output.c commun.h

test: input output
	./output > data.bin
	./input < data.bin
	hd ./data.bin

exo_8: exo_8.c
	cc -o exo_8 exo_8.c

clean:
	rm -f *.o output input data.bin

.PHONY: all clean

