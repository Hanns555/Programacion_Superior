#include <iostream>

using namespace std;

class Movimiento{
	public:
		//Tres Funciones con el mismo nombre overloading
		void Caminar(){
			cout<<"Estoy caminando \n";
		}	
		void Caminar(int horas){
			cout<<"Estoy caminando por "<<horas<<" horas\n";
		}
		void Caminar(float minutos){
			cout<<"Estoy caminando por "<<minutos<<" minutos\n";
		}
};

int main(){
	float minutos=50.2;
	int horas=5;
	Movimiento persona;
	persona.Caminar();
	persona.Caminar(horas);
	persona.Caminar(minutos);
	return 0;
}
