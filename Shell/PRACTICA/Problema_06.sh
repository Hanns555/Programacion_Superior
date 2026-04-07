#!/bin/bash
#Crea un script que pida al usuario dos rutas. Mueva el archivo de la primera ruta a la segunda. 
#Luego busca dentro de la carpeta destino si existe ese archivo con find 
#y muestra un mensaje confirmando si se encontró o no.
read -p "Ingrese una ruta del archivo: " ruta_1
read -p "Ingrese una ruta destino para el archivo:  " ruta_2
mv $ruta_1 $ruta_2
nombre_archivo=$(basename $ruta_1)
variable=$(find $ruta_2 -name "$nombre_archivo")

if [[ $variable ]]; then
    echo "El archivo $nombre_archivo fue encontrado en $ruta_2"
else
    echo "El archivo no se encontro en $ruta_2"
fi