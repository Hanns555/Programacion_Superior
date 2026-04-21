#include <iostream>
using namespace std;

//Uso de DMA

int main(){
    int arr[4]={1,2,3,4}; //Variable con asignacion fija de memoria
    
    int x=5;              //Numero Variable
    int *Px=&x;           //Puntero de numero

    int *numero;          //Declaramos una variable de tipo entero
    numero = new int[5];  //Se asigna el tamanio de memoria para 5 valores enteros

    delete [] numero;     //Borra el pointer numero
    delete Px;            //Borra el pointer Px
    return 0;
}