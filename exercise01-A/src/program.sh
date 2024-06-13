#!/bin/bash

# Exercise 01-A: Line Totals

while read -r line; do
    sum=0

    IFS=' ' read -ra ADDR <<< "$line"
    for i in "${ADDR[@]}"; do
        sum=$((sum + i))
    done

    echo $sum
done