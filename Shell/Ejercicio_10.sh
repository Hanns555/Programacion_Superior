#!/bin/bash
arreglo_prueba=("h" "o" "l" "a")
for letra in ${arreglo_prueba[@]};do
    echo "$letra"
done

echo 

#Otra forma de usar for
for letra in "a" "d" "i" "o" "s"; do
    echo "$letra"
done