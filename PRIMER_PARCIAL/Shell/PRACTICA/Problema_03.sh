#!/bin/bash
#Crea un script que pida al usuario el nombre de un archivo, lo cree con touch, 
#luego le escriba adentro el mensaje "Archivo creado por: " seguido de su nombre (también pedido al usuario).
read -p "Ingrese su nombre: " nombre_usuario
read -p "Colocoque el nombre del archivo que se creara: " nombre_archivo
touch $nombre_archivo
echo "Archivo creado por: $nombre_usuario" >> $nombre_archivo
cat $nombre_archivo