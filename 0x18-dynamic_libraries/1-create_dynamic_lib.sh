#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=c99 -shared -fPIC -o liball.so *.c
