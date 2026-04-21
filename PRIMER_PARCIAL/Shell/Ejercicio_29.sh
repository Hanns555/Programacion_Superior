#!/bin/bash
echo "Generador de archivos"
echo "[INFO] Texto de Info" > informaciones.txt
echo "[ERROR] Texto de error" >> informaciones.txt
echo "[WARNING] Texto de warning" >> informaciones.txt

grep -i "error" informaciones.txt > error.log
grep -i "info" informaciones.txt > info.log
grep -i "warning" informaciones.txt > warning.log

echo "Contenido de error.log"
cat error.log
echo "Contenido de info.log"
cat info.log
echo "Contenido de warning.log"
cat warning.log