#!/bin/bash
#Crea un script que pida una palabra al usuario y busque en todos los archivos de la carpeta actual si esa palabra existe. 
#Si la encuentra muestra en qué archivo está con grep -l, 
#si no muestra un mensaje de que no se encontró.
read -p "Ingrese una palabra a buscar: " palabra
variable=$(grep -r -i "$palabra" ./)
if [[ $variable ]];then
echo "Se encontro la palabra en: "
grep -r -l "$palabra" ./ 
else
echo "No se encontro la palabra en la carpeta actual "
fi