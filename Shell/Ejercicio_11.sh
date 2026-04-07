#!/bin/bash
x=1
readonly CONSTANTE=0
while [[ $x -ne $CONSTANTE ]]; 
do
    echo "Para salir ingrese un 0"
    read -p "Ingrese un numero: " numero
    producto=$((x * numero))
    echo "Su numero es $producto"
    x=$producto
done

