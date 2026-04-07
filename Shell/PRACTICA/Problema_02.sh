#!/bin/bash
#Crea un script que pida una palabra al usuario y busque esa palabra dentro de todos los archivos .txt de la carpeta actual.
read -p "Ingrese una palabra a buscar dentro los archvios .txt: " palabra
grep -i "$palabra" *.txt
