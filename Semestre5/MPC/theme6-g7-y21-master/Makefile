all: compteur nomtemp mstrdup
CC	= gcc
CFLAGS =-Wall -Werror -ansi -pedantic
.PHONY: all clean

compteur:
	$(CC) src/compteur.c -o build/$@


nomtemp:
	$(CC) src/nomtemp.c -o build/$@

mstrdup:
	$(CC) src/mstrdup.c -o build/$@


clean:
	rm src/*.o
	rm -f build/*