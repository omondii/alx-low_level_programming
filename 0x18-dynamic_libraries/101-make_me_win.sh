#!/bin/bash
gcc -shared -fPIC -o libtest.so test.c
LD_PRELOAD =/$pwd/libtest.so ./gm 9 8 10 24 75 9
