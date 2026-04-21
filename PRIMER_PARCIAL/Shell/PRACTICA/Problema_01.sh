#!/bin/bash
#Crea un script que pida al usuario su nombre y cree una carpeta con ese nombre dentro de una carpeta llamada Usuarios.
read -p "Ingrese su nombre: " nombre
mkdir -p Usuarios/$nombre
echo "La carpeta fue creada en usuarios: $HOME/Usuarios" 
ls $HOME/Usuarios 