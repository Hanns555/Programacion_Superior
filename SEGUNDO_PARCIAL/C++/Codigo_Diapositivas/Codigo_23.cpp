#include <iostream>

using namespace std;

class Persona{
	//Encapsulamiento
	private:
		string relacion;
	public:
		string Nombre;
		int edad;
		Persona(string nombre, int Edad){
			Nombre=nombre;
			edad=Edad;
			cout<<"Hola, soy una persona \n";
		}
	//Funciones para ibtener los datos privados
		void setRelacion(string rel){
			relacion =rel;
		}	
		string getRelacion(){
			return relacion;
		}
};

int main(){
	Persona	Xavier("Xavier",33);
	string relacion="secreto";
	Xavier.setRelacion(relacion);
	cout<<Xavier.getRelacion()<<endl;
	return 0;
}
