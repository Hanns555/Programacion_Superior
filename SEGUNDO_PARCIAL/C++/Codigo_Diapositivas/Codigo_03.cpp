#include <iostream>
#include <stdio.h>

using namespace std;

class Calculadora{
	public:
	double numero1;
	double numero2;
	double resultado;

	Calculadora(){
		this -> numero1=0;
		this -> numero2=0;
		this -> resultado=0;
	}

	void IngresarNumeros(){
		cout<<"Ingrese el valor del numero1: ";
		cin>>numero1;
		cout<<"Ingrese el valor del numero2: ";
		cin>>numero2;
	}
	
	double Sumar(){
		resultado=numero1+numero2;
		printf("La suma es: %.2f\n",resultado);
		return resultado;
	}

	double Restar(){
		resultado=numero1-numero2;
		printf("La resta es: %.2f\n",resultado);
		return resultado;
	}

	double Producto(){
		resultado=numero1*numero2;
		printf("El producto  es: %.2f\n",resultado);
		return resultado;
	}

	double Dividir(){
		resultado=numero1/numero2;
		printf("La division es: %.2f\n",resultado);
		return resultado;
	}
	
	void Menu(){
		int opcion;
		while (true){
			cout<<"================="<<endl;
			cout<<"      Menu       "<<endl;
			cout<<"================="<<endl;
			cout<<"1. Sumar\n";
			cout<<"2. Restar\n";
			cout<<"3. Producto\n";
			cout<<"4. Dividir\n";
			cout<<"0. Salir\n";
			printf("Selecione una opcion: ");
			scanf("%d", &opcion);
			if (opcion==0){
				break;
			}
			else if(opcion==1){
				this->Sumar();
				//break;
			}
			else if(opcion==2){
				this->Restar();
				//break;
			}
			else if(opcion==3){
				this->Producto();
				//break;
			}
			else if(opcion==4){
				this->Dividir();
				//break;
			}
			else{
				printf("Opcion Invalida\n");
			}
		}
	}
};




int main(){
	Calculadora Calc;
	Calc.IngresarNumeros();
	Calc.Menu();
	return 0;
}
