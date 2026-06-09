#!/bin/bash

mkdir -p "gestion empresa"/{automatizacion/{logs,programas},registros/{administradores/{ingenieria/{hardware,software},marketing},otros,usuarios}}
if [ $? -eq 0 ]; then
echo "Correcto"
else
echo "Incorrecto"
fi
tree "gestion empresa"
