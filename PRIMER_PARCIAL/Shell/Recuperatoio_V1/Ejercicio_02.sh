#!/bin/bash

#cd ../../..
find "gestion empresa" \( -name "*.log" -o -name "*.txt" \) -type f
grep -r ".*" --include="*.log" "gestion empresa" > "gestion empresa"/"automatizacion"/"logs"/resultado.txt
grep -r '2026-..-.. LOG ".*"' "gestion empresa" --include="*.txt" --exclude="resultado.txt">> "gestion empresa"/"automatizacion"/"logs"/resultado.txt

if [ $? -eq 0 ];then 
echo "Correcto"
else  
echo "Incorrecto"
fi
