#!/bin/bash
read -p "Ingrese un numero: " numero
suma=$(( numero + 5 ))
echo "Adivina el numero"
read -p "Ingrese el numero quue cree que es: " numero2
if [ $numero2 == suma ]; then
    echo "Adivinaste el numero"
    echo "El numero era $suma"
else 
    echo "No adivinaste el numero"
    echo "El numero era $suma"
fi
