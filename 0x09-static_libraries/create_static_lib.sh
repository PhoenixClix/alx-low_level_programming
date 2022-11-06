#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -c -o *.o|ar rc liball.a *.o
