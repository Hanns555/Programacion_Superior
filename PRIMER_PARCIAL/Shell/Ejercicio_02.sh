#!/bin/bash
readonly CONSTANTE=3
read -p "Ingrese un numero: " numero
echo "La constante vale $CONSTANTE"
suma=$((CONSTANTE + numero))
echo "La suma de la constante y su numero es $suma"