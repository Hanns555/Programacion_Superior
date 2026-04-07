#!/bin/bash
read -p "Ingrese el nombre de un directorio: " directorio
if [ -d "$directorio" ]; then
echo "El directorio existe"
else
echo "El directorio no existe"
mkdir "$directorio"
fi
ls . -l