#!/bin/bash

echo "Multiplication without multiplication operator"

echo "Enter two values:"
read x
read y

while [ $y != 0 ]
do

((y--))
s=$((x+s))

done

echo $s
