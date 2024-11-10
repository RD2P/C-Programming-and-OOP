#!/bin/bash

# Compile the C program
gcc -o temp_executable $1

# Check if compilation was successful
if [ $? -eq 0 ]; then
    ./temp_executable

    rm temp_executable
else
    echo "Compilation failed"
fi