#!/bin/bash

echo "Enter a value to calculate its factorial:"
read x;


gcc /t/cli_fact.c

time ./a.out $x  > out.txt

cat out.txt > /dev/tty1
ps > /dev/tty1
