#!/bin/bash

# Compile all .c files into object files
gcc -c *.c

# Create a static library (liball.a) and add all object files to it
ar -rc liball.a *.o

# Index and optimize the library
ranlib liball.a

# Clean up by removing the object files
rm *.o

echo "Static library liball.a is now created."

