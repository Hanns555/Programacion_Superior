#!/bin/bash

ls -l 
num_files=$(ls | wc -l)
echo "Hay un total de $num_files archivos"

if [[ $? -eq 0 ]]; then
    echo "Comando ejecutado con exito"
else
    echo "Error de comando"
fi
