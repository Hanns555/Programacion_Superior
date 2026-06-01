#include <iostream>

using namespace std;

class Calculadora{
	public:
	double a;
	double b;
	double resultado;

	Calculadora(){
		this-> a=0;
		this-> b=0;
		this-> resultado=0;
	}	

	void IngreseNumeros(){
		cout<<"Ingrese un numero a: ";
		cin>>a;
		cout<<"Ingrese un numero b: ";
		cin>>b;
	}

	double sumar(){
		resultado=a+b;
		return resultado;
	}

	double restar(){
		resultado=a-b;
		return resultado;
	}

	double multiplicar(){
		resultado=a*b;
		return resultado;
	}

	double dividir(){
		if(b == 0){
	        printf("Error: no se puede dividir entre cero\n");
	        resultado=0;
	        return resultado;
	    }
	    resultado = a/b;
	    return resultado;
	}

	void MostrarResultado(){
		printf("Resultado: %.2f\n",resultado);
	}

	void Menu_Calculador(){
		while(true){
			string opcion;
			printf("MENU \n");
			printf("1. Sumar \n");
			printf("2. Restar \n");
			printf("3. Multiplicar \n");
			printf("4. Dividir \n");
			printf("0. Salir\n");
			cout<<"Ingrese una opcion: ";
			cin>>opcion;
			if(opcion=="0" || opcion=="salir"){
				break;
			}
			else if(opcion=="1"){
				this-> IngreseNumeros();
				this->sumar();
			}
			else if(opcion=="2"){
			    this-> IngreseNumeros();
				this->restar();			
			}
			else if(opcion=="3"){
				this-> IngreseNumeros();
				this->multiplicar();
			}
			else if(opcion=="4"){
				this-> IngreseNumeros();
				this-> dividir();	
			}
			else{
				printf("Opcion Invalida\n");	
			}
			this-> MostrarResultado();
		}
	}
};


int main(){
	Calculadora Calc;
	Calc.Menu_Calculador();
	return 0;
}
