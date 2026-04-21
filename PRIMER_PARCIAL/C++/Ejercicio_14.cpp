#include <iostream>
using namespace std;

//Clases
class Persona{
    //Tipo
    public:
        //Atributos 
        string nombre;
        string sexo;
        int edad;
        //Constructor
        Persona () {
            cout << "Soy una persona";
        }
        //Metodos
        void respirar(){
            cout << "Estoy respirando";
        }
};


int main(){
    Persona xavier;
    cout<<endl;
    Persona eduardo;
    cout<<endl;
    Persona estudiante;
    cout<<endl;
    xavier.edad=25;
    cout<<xavier.edad<<endl;
    xavier.respirar();
    cout<<endl;
    return 0;
}