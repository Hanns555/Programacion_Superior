//no terminado


#include <iostream>
using namespace std;
void Menu();

int main(){
    Menu();
    return 0;
}
void Menu(){
    int opcion;
    do {
        cout << "1. Calcular Perimetro" << endl;
        cout << "2. Calcular Area"      << endl;
        cout << "0. Salir"              << endl;
        cout << "Ingrese una opcion: "  << endl;
        cin  >> opcion;

        switch (opcion) {        
            case 1:              
                
                break;
            case 2:             
                
                break;
            case 0:              
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opcion invalida" << endl;
                break;
        }                        

    } while(opcion != 0);        
}

//void Submenu(){

//}