#!/bin/bash
read -p "Ingrese el numero de Carpetas a crear: " Nro_Carpetas
for i in $(seq 1 $Nro_Carpetas); do
    read -p "Ingrese Nombre de la Carpeta $i: " elemento
    arreglo_carpetas+=("$elemento")
done
read -p "Ingrese la ruta donde crear las carpetas: " ruta
for Carpeta in ${arreglo_carpetas[@]}; do
    mkdir -p "$ruta/$Carpeta"
done
ls $ruta -l
echo "Carpetas Creadas"