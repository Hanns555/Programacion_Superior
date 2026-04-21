#include <iostream>
using namespace std;

void Cambiar_Valor(int&Variable);
void Ver_Valor(int&Variable);
void Menu();

int main(){
    Menu();
    return 0;
}
void Cambiar_Valor(int&Variable){
    int *P_Variable=&Variable;
    cout<<"El valor de la variable es: "<<Variable<<endl;
    cout<<"La direccion de la variable es: "<<&Variable<<endl;
    cout<<"Ingrese un nuevo valor de la variable: ";
    cin>>*P_Variable;
    cout<<"El nuevo valor de la variable es: "<<Variable<<endl;
    cout<<"La direccion de la variable es: "<<P_Variable<<endl;
}

void Ver_Valor(int&Variable){
    cout<<"El valor de la variable es: "<<Variable<<endl;
    cout<<"La direccion de la variable es: "<<&Variable<<endl;
}

void Menu(){
    int opcion;
    int Variable=5;
    do{
        cout<<"1. Cambiar Valor de la Variable"<<endl;
        cout<<"2. Ver valor de la variable"<<endl;
        cout<<"0. Salir"<<endl;
        cout<<"Seleccione una opcion: ";
        cin>>opcion;
        switch(opcion){
            case 1:
            Cambiar_Valor(Variable);
            break;
            case 2:
            Ver_Valor(Variable);
            break;
            case 0:
            cout<<"Saliendo"<<endl;
            break;
            default:
            cout<<"Opcion Invalida"<<endl;
            break;
        }
    }while(opcion != 0);
}