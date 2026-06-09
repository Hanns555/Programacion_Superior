#!/bin/bash

mkdir -p Materias/{SistemasEmbebidos/{Microcontroladores/{ARM,PIC},Comunicaciones/{UART,I2C},Perifericos/{ADC,PWM}},VisionComputacional/{OpenCV,DeteccionObjetos},MachineLearning/{Supervised,Unsupervised,Reinforcement}}
if [ $? -eq 0 ]; then
echo "Correcto"
else
echo "Incorrecto"
fi
tree Materias
