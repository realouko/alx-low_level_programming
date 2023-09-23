#!/bin/bash

CC="gcc"
CFLAGS="-Wall -Werror -Wextra -pedantic -std=gnu89"

$CC $CFLAGS -c *.c

ar rcs liball.a *.o

rm -f *.o

echo "Static library liball.a has been created."
