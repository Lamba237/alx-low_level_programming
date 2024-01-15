#!/bin/bash

#first create object files for all *.c functions
gcc -c *.c -fpic
gcc *.o -shared -o liball.so
