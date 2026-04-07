#!/bin/bash
#Crea un script que pida una ruta de origen y una ruta de destino, 
#y copie todo el contenido de la carpeta origen a la carpeta destino. Al final muestra el árbol de la carpeta destino ordenado alfabéticamente.
echo "Todo en enrutamiento absoluto"
read -p "Ingrese una ruta de origen: " ruta_origen
read -p "Ingrese una ruta de destino: " ruta_destino
cp -r $ruta_origen $ruta_destino
tree $ruta_destino