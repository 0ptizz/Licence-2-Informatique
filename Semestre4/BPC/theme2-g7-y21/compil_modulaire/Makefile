all: numbers_test
CC=gcc 
CFLAGS=-Wall -Werror -ansi -pedantic
.PHONY: all clean
numbers-test.o: numbers-test.c
	$(CC) $(CFLAGS) -c $^

put_numbers.o: put_numbers.c
	$(CC) $(CFLAGS) -c $^
	
numbers_test: numbers-test.o put_numbers.o
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -f *.o 
	rm -f numbers_test
