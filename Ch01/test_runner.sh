#!/bin/bash

# preprocess
gcc -E test.c -o test.i
# compile
gcc -S test.c -o test.s
# assemble
gcc -c test.s -o test.o
# link
gcc test.o -o test.exe
# execute
.\test.exe