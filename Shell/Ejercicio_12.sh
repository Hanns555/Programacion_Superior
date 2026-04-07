#!/bin/bash
read -p "Ingrese el tamanio del arreglo: " tamanio
for i in $(seq 1 $tamanio); do
    read -p "Ingrese elemento $i: " elemento
    arreglo+=("$elemento")
done

echo "Tu arreglo es ${arreglo[@]}"

echo "Individualmente es: "
for letra in ${arreglo[@]}; do
    echo "$letra"
done