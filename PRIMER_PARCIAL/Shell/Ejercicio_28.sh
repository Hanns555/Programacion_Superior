#!/bin/bash
echo "Arbol de Rutas"
read -p "Ingrese una ruta donde crear el arbol: " ruta
if [ -d "$ruta" ]; then
echo "La ruta es valida"
mkdir -p "$ruta"/Materias/{SistemasEmbebidos/{Microcontroladores/{ARM,PIC},Comunicaciones/{UART,I2C},Perifericos/{ADC,PWM}},VisionComputacional/{OpenCV,DeteccionObjetos},MachineLearning/{Supervised,Unsupervised,Reinforcement}}
tree "$ruta"/Materias
else
echo "La ruta no es valida"
echo "Se creo en el Escritorio"
mkdir -p $HOME/Escritorio/Materias/{SistemasEmbebidos/{Microcontroladores/{ARM,PIC},Comunicaciones/{UART,I2C},Perifericos/{ADC,PWM}},VisionComputacional/{OpenCV,DeteccionObjetos},MachineLearning/{Supervised,Unsupervised,Reinforcement}}
tree $HOME/Escritorio/Materias
fi