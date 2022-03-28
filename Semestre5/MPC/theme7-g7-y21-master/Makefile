all: ififo gfifo
CC	= gcc
CFLAGS =-Wall -Werror -ansi -pedantic
cyan = /bin/echo -e "\x1b[36m\#\# $1\x1b[0m"
purple = /bin/echo -e "\033[0;35m\#\# $1\x1b[0m"
.PHONY: all clean




gfifo.o: src/gfifo.c src/gfifo.h
	$(CC) $(CFLAGS) -c $^ -o $@

iififo.o: src/iififo.c src/iififo.h
	$(CC) $(CFLAGS) -c $^ -o $@

ififo: src/iififo.o
	$(CC) $(CFLAGS) -o build/$@ $^

gfifo: src/gfifo.o
	$(CC) $(CFLAGS) -o build/$@ $^

test:
	@$(call cyan,"-----------------TEST IFIFO-----------------")
	./build/ififo

	@$(call purple,"-----------------TEST GIFIFO-----------------")
	./build/gfifo


clean:
	rm src/*.o
	rm -f build/*