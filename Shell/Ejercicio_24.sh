#!/bin/bash
echo "Verificacion de comando tree"
read -p "Ingrese una ruta: " ruta
tree "$ruta"
if [ $? == 0 ]; then
echo "Comando Ejecutado Correctamente"
else
echo "El comando no se ejecuto correctamente"
fi