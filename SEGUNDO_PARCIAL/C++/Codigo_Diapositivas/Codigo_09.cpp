#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

class Compras{
	public:
	//Atributos
	double precio;
	double descuento;	
	int nrocompras;

	Compras(){
		this -> precio=0;
		this -> descuento=0;
	}

	double ObtenerDescuento(){
		cout<<"Ingrese el valor de su compra: ";
		cin>>precio;
		if (precio<=100){
			printf("Sin descuento\n");
		}
		else if(precio>100 && precio<=200){
			descuento=precio*0.05;
			printf("Con descuento de: %.2f\n",descuento);
		}
		else if(precio>200 && precio<=500){
			descuento=precio*0.1;
			printf("Con descuento de: %.2f\n",descuento);
		}
		else{
			descuento=precio*0.2;
			printf("Con descuento de: %.2f\n",descuento);
		}
		return descuento;
	}

	void MostrarDescuentos(){
        printf("Precio: %.2f - Descuento: %.2f - Total: %.2f\n",
              	 precio, descuento, precio - descuento);
    }
};


int main(){
	int n;
	cout<<"Ingrese las n compras a realizar: ";
	cin>>n;
	Compras* Items = new Compras[n];
	for(int i=0; i<n;i++){
		Items[i].ObtenerDescuento();
	}
	printf("RESUMEN \n");
	for(int i=0;i<n;i++){
		cout<<"Compra"<<i+1<<": ";
		Items[i].MostrarDescuentos();
	}
	return 0;
}
