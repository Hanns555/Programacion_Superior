#include <iostream>
#include <string.h>
#define mecatronica 4
#define biomedica 5
#define sistemas "optativa" 
using namespace std;

void Cuestionario();

int main(){
    Cuestionario();
    return 0;
}
void Cuestionario(){
    string carrera;
    cout<<"Carreras mecatronica, biomedica, sistemas"<<endl;
    cout << "Ingrese de carrera es: ";
    getline(cin,carrera);
    if (carrera == "mecatronica")
    {
        cout<<"Se toma en el semestre: "<<mecatronica<<endl;
    }
    else if (carrera == "biomedica") 
    {
        cout<<"Se toma en el semestre: "<<biomedica<<endl;
    }
    else
    {
        cout<<"Se toma en el semestre: "<<sistemas<<endl;
    }
}