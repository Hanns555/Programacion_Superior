#!/bin/bash

x=13
if [[ $x == "10" ]]; then
   echo "La variable es un 10 string"
fi
if [[ $((x)) -lt 10 ]];then
    echo "x es menor a 10"
elif [[ $((x)) -eq 10 ]]; then
    echo "x es igual a 10"
else
    echo "x es mayor a 10"
fi