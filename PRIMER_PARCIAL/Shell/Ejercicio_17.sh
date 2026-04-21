#!/bin/bash
echo "Cambiar Permisos"
read -p "Ingrese el archivo a modificar: " archivo
buscar=$(find . -name $archivo -type f)
if [ $buscar ]; then
    read -p "Ingrese el codigo de los permisos a cambiar: " codigo
    chmod $codigo $archivo
    ls $archivo -l
else
    echo "archivo no encontrado en la carpeta actual"
fi

