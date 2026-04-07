#!/bin/bash
read -p "Ingrese un numero 1: " numero_1
read -p "Ingrese un numero 2: " numero_2
suma=$((numero_1 + numero_2))  
resta=$((numero_1 - numero_2))  
producto=$((numero_1 * numero_2))  
division=$(echo "scale=4; $numero_1 / $numero_2" | bc | sed 's/^\./0./')
echo  "La suma es: $suma"
echo  "La resta es: $resta"
echo  "La multiplicacion es: $producto"
echo "La division es: $division"