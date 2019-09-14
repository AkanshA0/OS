#!/bin/bash

declare -i x
declare -i y

while []
echo "Enter first number"
read x
echo "Enter second number"
read y

echo "$x+$y" | bc -l
echo "$x-$y" | bc -l
echo "$x*$y" | bc -l
echo "$x/$y" | bc -l

echo "for loop"
for i in 1 2 3; do
 echo $i
done 


