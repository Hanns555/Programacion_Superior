#include <iostream>
#include <cctype>
#include <cmath>
using namespace std;

class Calculadora{
    public:
    //Atributos
    double numero_1;
    double numero_2;
    double resultado;
    bool error=false;
    //Constrcutor
    Calculadora(){
        this -> numero_1 = numero_1;
        this -> numero_2 = numero_2;
        this -> resultado = resultado;
    }
    //Metodos
    void pedirnumeros(){
        cout<<"Ingrese un numero_1: ";
        cin>>numero_1;
        cout<<"Ingrese un numero_2: ";
        cin>>numero_2;
    }

    void mostrarResultado(string operacion) {
        cout << "El resultado de " << operacion
             << " es: " << resultado << endl;
    }

    void Mensaje_Error(string operacion){
        cout<< "Error de argumentos en "<<operacion<<endl;
        cout<< "1. Volver al menu"<<endl;
        cout<< "2. Volver a ingresar datos"<<<endl;
        
    }

    void Suma() {
        pedirnumeros();
        resultado = numero_1 + numero_2;
        mostrarResultado("la suma");
    }

    void Resta() {
        pedirnumeros();
        resultado = numero_1 - numero_2;
        mostrarResultado("la resta");
    }

    void Producto() {
        pedirnumeros();
        resultado = numero_1 * numero_2;
        mostrarResultado("el producto");
    }

    void Cociente() {
        pedirnumeros();
        resultado = numero_1 / numero_2;
        mostrarResultado("el cociente");
    }

    void Potencia() {
        pedirnumeros();
        resultado = pow(numero_1,numero_2);
        mostrarResultado("la potencia");
    }

    void Raiz() {
        pedirnumeros();
        resultado =pow(numero_1,(1/numero_2));
        mostrarResultado("la raiz");
    }

    void Menu_Calculadora(){
    int opcion;
    bool encender=true;
    do{
        cout<<"================"<<endl;
        cout<<"MENU CALCULADORA"<<endl;
        cout<<"================"<<endl;
        cout<<"1. Sumar"<<endl;
        cout<<"2. Restar"<<endl;
        cout<<"3. Producto"<<endl;
        cout<<"4. Cociente"<<endl;
        cout<<"5. Potencia"<<endl;
        cout<<"6. Raiz"<<endl;
        cin>>opcion;
        switch(opcion){
            case 1:
            Suma();
            break; 
            case 2:
            Resta();
            break;
            case 3:
            Producto();
            break;
            case 4:
            Cociente();
            break;
            case 5:
            Potencia();
            break;
            case 6:
            Raiz();
            break;
            case 0:
            encender=false;
            break;
            default:
            cout<<"Opcion Invalida"<<endl;
            break;
        }
    }while(encender!=false);
    }
};

int main(){
    Calculadora Hola;
    Hola.Menu_Calculadora();
    return 0;
}