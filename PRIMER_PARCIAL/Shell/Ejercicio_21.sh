#!/bin/bash
read -p "Ingrese el nombre del archivo: " archivo
busqueda=$(find . -name "$archivo" -type f)
if [ $busqueda ]; then
    read -p "Ingrese el codigo para cambiar los permisos: " codigo
    chmod $codigo $archivo
    ls $archivo -l
else
    echo "El archivo no se encuentra en la carpeta actual"
fi