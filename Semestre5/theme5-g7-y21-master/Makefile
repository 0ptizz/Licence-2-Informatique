all: nvar mprintenv search_interval mmemcpy memswap filter_int
CC	= gcc
CFLAGS =-Wall -ansi -pedantic 
.PHONY: all clean


src/nvar.o: src/nvar.c
	$(CC) $(CFLAGS) -c $^ -o $@

nvar: src/nvar.o
	$(CC) $(CFLAGS) -o build/$@ $^




src/mprintenv.o: src/mprintenv.c
	$(CC) $(CFLAGS) -c $^ -o $@

mprintenv: src/mprintenv.o
	$(CC) $(CFLAGS) -o build/$@ $^



search_interval:
	$(CC) src/search_interval.c -o build/$@


src/mmemcpy.o: src/mmemcpy.c
	$(CC) $(CFLAGS) -c $^ -o $@

mmemcpy: src/mmemcpy.o
	$(CC) $(CFLAGS) -o build/$@ $^



src/memswap.o: src/memswap.c
	$(CC) $(CFLAGS) -c $^ -o $@

memswap: src/memswap.o
	$(CC) $(CFLAGS) -o build/$@ $^


src/filter_int.o: src/filter_int.c
	$(CC) $(CFLAGS) -c $^ -o $@

filter_int: src/filter_int.o
	$(CC) $(CFLAGS) -o build/$@ $^

clean:
	rm src/*.o
	rm -f build/*
