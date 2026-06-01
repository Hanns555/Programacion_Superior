#include <iostream>

using namespace std;

class Persona{
	public:
	string nombre;
	int edad;
	string sexo;	

	Persona(){
		cout<<"Hola, soy una persona\n";
	}

	void Respirar(){
		cout<<"Estoy Respirando\n";
	}
};

int main(){
	//Creamos tres objetos
	Persona Hanns;
	Persona Xavier;
	Persona Estudiante;

	Xavier.edad=25;
	cout<<"Edad de Xavier: "<<Xavier.edad<<endl;

	//Metodo de Persona
	Xavier.Respirar();
	return 0;
}
