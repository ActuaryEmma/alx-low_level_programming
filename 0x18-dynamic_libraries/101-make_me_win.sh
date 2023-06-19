#!/bin/bash
gcc -fpic -shared -o libtest.so *.c
LD_PRELOAD=/$PWD/libtest.so ./gm 9 8 10 24 75 9
