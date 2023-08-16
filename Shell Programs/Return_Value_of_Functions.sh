#!/bin/bash

add() 
{
    len=$#
    sums=0
    i=1
    n=$((len+1))
    while [ $i -lt $n ]; do
        val=${!i}
        sums=$((sums+val))
        i=$((i+1))
    done
    return $sums
}

add 10 20 30 40
echo "Sum of the input numbers is: $?"

