#!/bin/bash
ayuda1=0
ayuda2=0
read -p "Ingrese un numero: " numero
suma=$(( numero + 5 ))
echo "Adivina el numero"
while [[ $numero2 -ne $suma ]];
do
    read -p "Ingrese el numero quue cree que es: " numero2
    if [ $numero2 == $suma ]; then
        echo "Adivinaste el numero"
        echo "El numero era $suma"
        echo "Lo lograste en $intentos intentos"
    else 
        echo "No adivinaste el numero"
        echo "Pista"
        if [ $ayuda1 -lt $suma ]; then
             ayuda1=$((numero+intentos))
        fi
        if [ $suma -gt $ayuda2 ]; then
             ayuda2=$((numero2-intentos))
        fi
        echo "Numero entre $ayuda1 y $ayuda2"
    fi
    ((intentos++))
done