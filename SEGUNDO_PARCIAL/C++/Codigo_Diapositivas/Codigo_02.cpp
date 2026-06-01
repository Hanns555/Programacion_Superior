#include <iostream>
#include <stdio.h>

using namespace std;

class Persona{
	public:
	string nombre;
	int edad;
	string carrera;

	Persona(){
		this -> nombre="";
		this -> edad=0;
		this -> carrera="";
	}

	void IngresarDatos(){
		cout<<"Ingrese el nombre de la persona: ";
		cin>>nombre;
		cout<<"Ingrese la edad de la persona: ";
		cin>>edad;
		cout<<"Ingrese la carrera del estudiante: ";
		cin>>carrera;
	}

	void MostrarDatos(){
		printf("Nombre: %s\n",nombre.c_str());
		printf("Edad: %d\n",edad);
		printf("Carrera: %s\n",carrera.c_str());
		this->MensajePersonalizado();
	}

	void MensajePersonalizado(){
		printf("Soy un estudiante de la UCB \n");
	}
};


int main(){
	Persona Person;
	Person.IngresarDatos();
	Person.MostrarDatos();
	return 0;
}
