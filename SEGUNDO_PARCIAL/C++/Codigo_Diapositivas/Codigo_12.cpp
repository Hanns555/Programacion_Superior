#include <iostream>
#include <stdio.h>

using namespace std;

#define dolares 1
#define bolivianos(n) 7*dolares*n
#define soles(n) 10*dolares*n
#define bitcoin(n) 10000*dolares*n
#define euros(n) ((0.1*dolares)+dolares)*n

class Conversiones{
	private:
	string moneda;
	double valor;
	double conversion;

	public:
	Conversiones(){
		this-> moneda="";
		this-> valor=0;
		this-> conversion=0;
	}

	void Menu_Conversion(){
		while(true){
			printf("MENU \n");
			printf("1. Bolivianos \n");
			printf("2. Soles \n");
			printf("3. Euros \n");
			printf("4. Bitcoin \n");
			printf("5. Salir \n");
			cout<<"Ingrese una opcion: ";
			cin>>moneda;
			if(moneda=="5" || moneda=="Salir"){
				break;
			}
			else if(moneda=="1" || moneda=="bs"){
				moneda="bs";
				this-> DolaresBolivianos();
				this-> MostrarConversion();
			}
			else if(moneda=="2" || moneda=="soles"){
				moneda="soles";
				this-> DolaresSoles();		
				this-> MostrarConversion();
			}
			else if(moneda=="3" || moneda=="euros"){
				moneda="euros";
				this-> DolaresEuros();		
				this-> MostrarConversion();
			}
			else if(moneda=="4" || moneda=="bitcoin"){
				moneda="bitcoin";
				this-> DolaresBitcoin();		
				this-> MostrarConversion();
			}
			else{
				printf("Opcion Invalida \n");
			}
		}
	}
	
	double DolaresBolivianos(){
		cout<<"Ingrese la cantidad de dolares: ";
		cin>>valor;
		conversion=bolivianos(valor);
		return conversion;
	}
	double DolaresSoles(){
		cout<<"Ingrese la cantidad de dolares: ";
		cin>>valor;
		conversion=soles(valor);
		return conversion;
	}
	double DolaresEuros(){
		cout<<"Ingrese la cantidad de dolares: ";
		cin>>valor;
		conversion=euros(valor);
		return conversion;
	}
	double DolaresBitcoin(){
		cout<<"Ingrese la cantidad de dolares: ";
		cin>>valor;
		conversion=bitcoin(valor);
		return conversion;
	}
	
	void MostrarConversion(){
		printf("La conversion de %.2f dolares a %s es %.2f %s \n",valor,moneda.c_str(),conversion,moneda.c_str());		
	}
};

int main(){
	Conversiones Monedas;
	Monedas.Menu_Conversion();
	return 0;
}
