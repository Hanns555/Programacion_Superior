#include <iostream>
using namespace std;

void multiReturn(string*palA, string*palB);

int main(){
    string palA,palB;
    multiReturn(&palA,&palB);
    cout<<"Su nombre es: "<<palA<<endl;
    cout<<"Su apellido es: "<<palB<<endl;
    return 0;
}

void multiReturn(string*palA, string*palB){
    cout<<"Ingrese su nombre: ";
    cin>>*palA;
    cout<<"Ingrese su apellido: ";
    cin>>*palB;
}