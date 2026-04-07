#!/bin/bash
echo "Buscador de Palabra"
touch texto
echo "Un shell script, o guión de shell, es un archivo de texto que contiene una secuencia de comandos y operaciones que el intérprete de comandos, o shell, puede ejecutar automáticamente para automatizar tareas y simplificar procesos en el sistema operativo." > texto
read -p "Ingrese una palabra a buscar: " palabra
a=$(grep -c "$palabra" texto)
if [[ $a -ne 0 ]]; then
echo "La palabra $palabra existe en el texto"
else
echo "La palabra $palabra no existe en el texto"
fi
