#include <iostream>
#include <string.h>
using namespace std;

void Datos_Usuario();

int main() {
    Datos_Usuario();
    return 0;
}

void Datos_Usuario(){
    string nombre,carrera;
    int edad=0;
    cout<<"Ingrese su nombre: ";
    getline(cin,nombre);
    cout<<"Ingrese su edad: ";
    cin>>edad;
    cin.ignore();
    cout<<"Ingrese su carrera: ";
    getline(cin,carrera);
    cout<<"Su edad es "<<edad<<" con nombre "<<nombre<<" y estudia la carrera de "<<carrera<<endl;
}