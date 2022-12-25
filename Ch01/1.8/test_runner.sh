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
# for Windows uncomment the 1st line below, for Linux/Mac uncommet the 2nd line below
# .\test.exe
# ./test.exe