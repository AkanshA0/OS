#!/bin/bash

read -p "Enter first value"  a
read -p "Enter second value" b

echo "bitwise AND : $((a&b))"
echo "bitwise OR : $((a|b))"
