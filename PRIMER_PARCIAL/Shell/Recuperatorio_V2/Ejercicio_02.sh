#!/bin/bash

grep "\[INFO\].*" informacion.txt > info.log
grep "\[ERROR\].*" informacion.txt > error.log
grep "\[WARNING\].*" informacion.txt > warning.log

if [ $? -eq 0 ];then
	echo "Se crearon los archivos"
else
	echo "No se crearon los archivos"
fi
