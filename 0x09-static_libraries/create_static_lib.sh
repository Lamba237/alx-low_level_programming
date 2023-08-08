#!/bin/bash
gcc -c *.c
ar rcs liball.a
ar rcs liball.a *.o
ls *.c
ar -t liball.a
