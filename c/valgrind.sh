#!/bin/bash

gcc main.c --std=c99 -Wall -Werror -o main
export G_SLICE=always-malloc 
export G_DEBUG=gc-friendly  
valgrind -v --tool=memcheck --leak-check=full --num-callers=40 --log-file=valgrind.log ./main