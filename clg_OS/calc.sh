#!/bin/bash

echo "Four function calculator"
choice=6

while [ $choice != 0 ]
do

echo "1  Add"
echo "2  Sub"
echo "3  Mul"
echo "4  Div"
echo "0  Exit"
echo "Enter your choice"
read choice 

ps

echo "Enter first value :" 
read x
echo "Enter second value :"
read y

ps
if [ $choice == 1 ]
then
echo "addition is : "
echo $x + $y | bc -l
fi

if [ $choice == 2 ]
then
echo "substraction is : "
echo $x - $y | bc -l
fi

if [ $choice == 3 ]
then
echo "multiplication is : "
echo $x \* $y | bc -l
fi

if [ $choice == 4 ]
then
echo "division is : "
echo $x / $y | bc -l
fi

done
