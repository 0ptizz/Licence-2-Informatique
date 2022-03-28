all: swap division arg_main strip_spaces_tst swap_ptr search_dicho
CC	= gcc
CFLAGS =-Wall -Werror -ansi -pedantic 
.PHONY: all clean


src/swap.o: src/swap.c
	$(CC) $(CFLAGS) -c $^ -o $@

swap: src/swap.o
	$(CC) $(CFLAGS) -o build/$@ $^



src/print_numbers.o: src/print_numbers.c
	$(CC) $(CFLAGS) -c $^ -o $@

src/division.o: src/division.c
	$(CC) $(CFLAGS) -c $^ -o $@

division: src/division.o src/print_numbers.o
	$(CC) $(CFLAGS) -o build/$@ $^


src/arg_main.o: src/arg_main.c
	$(CC) $(CFLAGS) -c $^ -o $@

arg_main: src/arg_main.o
	$(CC) $(CFLAGS) -o build/$@ $^



src/skip_space.o: src/skip_space.c
	$(CC) $(CFLAGS) -c $^ -o $@

strip_spaces_tst: src/skip_space.o
	$(CC) $(CFLAGS) -o build/$@ $^



src/swap_ptr.o: src/swap_ptr.c
	$(CC) $(CFLAGS) -c $^ -o $@

swap_ptr: src/swap_ptr.o
	$(CC) $(CFLAGS) -o build/$@ $^


search_dicho:
	$(CC) src/search_dicho.c -o build/$@

clean:
	rm src/*.o
	rm -f build/swap
	rm -f build/division