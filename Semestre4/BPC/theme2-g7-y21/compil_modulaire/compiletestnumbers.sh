#!/usr/bin/env bash
gcc -c put_numbers.c
gcc -o numbers-test.c
gcc -o numbers_test put_numbers.o numbers-test.o
./numbers_test