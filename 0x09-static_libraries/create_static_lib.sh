#!/bin/bash

# Compile all .c files in the current directory
gcc -c *.c

#Create the static library liball.a
ar rc liball.a *.o
