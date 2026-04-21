#!/bin/bash
# arreglo_ejemplo=("conjunto","de","palabras")
nombres=("Juan" "Maria" "Pedro" "Ana")
echo "${nombres[0]}"      # Juan  (primer elemento)
echo "${nombres[1]}"      # Maria
echo "${nombres[-1]}"     # Ana   (último elemento)
echo "${nombres[@]}"      # Juan Maria Pedro Ana (todos)
echo "${#nombres[@]}"     # 4 (cantidad de elementos)