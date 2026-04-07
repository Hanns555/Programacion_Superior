#!/bin/bash
#Crea un script que pida al usuario el nombre de un directorio, verifique con find si existe, 
#y si existe muestre su contenido con tree, si no existe que lo cree con mkdir.
read -p "Ingrese el nombre de un directorio: " nombre_directorio
variable=$(find . -type d -name "$nombre_directorio")
if [[ $variable ]]; then
tree ./$nombre_directorio
else 
mkdir $nombre_directorio
echo "El directorio no existia se creo en la carpeta actual"
ls ./
fi