all: mcu_test mcu_wc mcu_wl mcu_rev
CC	= gcc
CFLAGS =-Wall -Werror -ansi -pedantic 
.PHONY: all clean

src/mcu_putint.o: src/mcu_putint.c
	$(CC) $(CFLAGS) -c $^ -o $@

src/mcu_fatal.o: src/mcu_fatal.c
	$(CC) $(CFLAGS) -c $^ -o $@

src/mcu_readl.o: src/mcu_readl.c
	$(CC) $(CFLAGS) -c $^ -o $@

src/mcu_test.o: src/mcu_test.c
	$(CC) $(CFLAGS) -c $^ -o $@

mcu_test: src/mcu_putint.o src/mcu_fatal.o src/mcu_readl.o src/mcu_test.o
	$(CC) $(CFLAGS) -o build/$@ $^



mcu_wc: src/mcu_wc.o
	$(CC) $(CFLAGS) -o build/$@ $^

mcu_wl: src/mcu_wl.o
	$(CC) $(CFLAGS) -o build/$@ $^


src/mcu_rev.o: src/mcu_rev.c
	$(CC) $(CFLAGS) -c $^ -o $@

mcu_rev: src/mcu_fatal.o src/mcu_rev.o src/mcu_readl.o
	$(CC) $(CFLAGS) -o build/$@ $^

mcu_uniq.o: src/mcu_uniq.c
	$(CC) $(CFLAGS) -c $^ -o src/mcu_uniq.o

mcu_uniq: src/mcu_uniq.o src/mcu_putint.o src/mcu_readl.o src/mcu_fatal.o
	$(CC) $(CFLAGS2) -o build/mcu_uniq $^



clean:
	rm src/*.o
	rm -f build/mcu_test
	rm -f build/mcu_wl
	rm -f build/mcu_wc