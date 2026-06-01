#include <iostream>
#include <stdio.h>

using namespace std;

class Estudiante{
	private:
	double promedio;
	int ingresos;
	public:
	//Atributos
	string nombre;
	string beca;

	Estudiante(){
		this-> nombre="";
		this-> promedio=0;
		this-> ingresos=0;
		this-> beca="";
	}
	
	void RegistrarEstudiante(){
		cout<<"Ingrese el nombre del estudiante: ";
		cin>>nombre;
		cout<<"Ingrese el promedio del estudiante: ";
		cin>>promedio;
		cout<<"Ingrese los ingresos del estudiante: ";
		cin>>ingresos;
		this->BecaEstudiante();
	}
	
	string BecaEstudiante(){
		if (promedio>=90 && ingresos<3000){
			beca="beca completa";
			return	beca;
		}
		else if (promedio>=80 && ingresos<5000){
			beca="media beca";
			return	beca;
		}
		else if (promedio>=70){
			beca="apoyo de materias";
			return	beca;
		}
		else{
			beca="sin beca";
			return beca;
		}
	}

	void mostrarEstudiante(){
		printf("Nombre: %s\n",nombre.c_str());
		printf("Promedio: %.2f\n",promedio);
		printf("Ingresos: %d\n",ingresos);
		printf("Beca: %s\n",beca.c_str());
	}
};


int main(){
	Estudiante Student;
	Student.RegistrarEstudiante();
	Student.mostrarEstudiante();
	return 0;
}
