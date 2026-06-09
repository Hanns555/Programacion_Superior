#!/bin/bash

echo " Tercer Recuperatorio: "
echo " 1. 1.ra parte"
echo " 2. 2.da parte"
read opcion
if [ $opcion == "1" ];then
	superexamen="1era parte"
else
	superexamen="2da parte"
fi

mkdir -p "examen recuperatorio"/{1er\ recuperatorio/Shell_y_c++,2do\ recuperatorio/python_y_progra_embebida,3er\ recuperatorio/"$superexamen"}

if [ $? -eq 0 ];then
	echo "Correcto"
	tree "examen recuperatorio"
else
	echo "Incorrecto"
fi
