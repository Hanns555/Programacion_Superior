#include <iostream>

using namespace std;

#define PI 3.1416

class Calculadora_Areas{
	public:
	double base;
	double altura;
	double radio;
	double resultado;

	Calculadora_Areas(){
		this-> base=0;
		this->altura=0;
		this-> radio=0;
		this-> resultado=0;
	}

	void IngresarDatos(){
		cout<<"Ingrese la base de la figura: ";
		cin>>base;
		cout<<"Ingrese la altura de la figura: ";
		cin>>altura;
	}

	double CalcularCuadrado(){
		resultado=base*altura;
		return resultado;
	}

	double CalcularTriangulo(){
		resultado=(base*altura)/2;
		return resultado;
	}

	double CalcularCirculo(){
		cout<<"INgresr el radio del circulo: ";
		cin>> radio; 
		resultado=radio*radio*PI;
		return resultado;
	}

	void MostrarResultado(){
		printf("Resultado: %.2f\n",resultado);
	}
	
	void Menu_Figuras(){
		while(true){
			string opcion="";
			printf("MENU\n");
			printf("1. Area Cuadrado\n");
			printf("2. Area Triangulo\n");
			printf("3. Area Circulo\n");
			printf("0. Salir\n");
			cout<<"INgrese una opcion: ";
			cin>>opcion;
			if(opcion=="0" || opcion=="salir"){
				break;
			}
			else if(opcion=="1"){
				this->IngresarDatos();
				this-> CalcularCuadrado();
				this->MostrarResultado();
			}
			else if(opcion=="2"){
				this->IngresarDatos();
				this-> CalcularTriangulo();
				this->MostrarResultado();
			}
			else if(opcion=="3"){
				this->CalcularCirculo();
				this->MostrarResultado();
			}
			else{
				printf("Opcion Invalida\n");
			}
		}
	}
};

int main(){
	Calculadora_Areas Calc;
	Calc.Menu_Figuras();
	return 0;
}
