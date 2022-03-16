#!/bin/bash

gcc -c *.c
ar rc libmy.a *.o
find . -name "*~" -delete -o -name "#*#" -delete
