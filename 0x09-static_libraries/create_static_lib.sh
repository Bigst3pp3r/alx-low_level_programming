#!/bin/bash
gcc -Wall -pedamic -Werror -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.o
