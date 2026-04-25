#include <iostream>
#include <cmath>
using namespace std;

void Menu_Calculadora();
double Suma(double *P_numero_1,double *P_numero_2);
double Resta(double *P_numero_1,double *P_numero_2);
double Producto(double *P_numero_1,double *P_numero_2);
double Cociente(double *P_numero_1,double *P_numero_2);
double Potencia(double *P_numero_1,double *P_numero_2);
double Raiz(double *P_numero_1,double *P_numero_2);

int main(){
	Menu_Calculadora();
	return 0;
}

void Menu_Calculadora(){
	int opcion;
	double numero_1,numero_2,resultado;
	double *P_numero_1=&numero_1;
	double *P_numero_2=&numero_2;
	double *P_resultado=&resultado;
	do{
	cout<<"=========================="<<endl;
	cout<<"Menu Calculadora"<<endl;
	cout<<"=========================="<<endl;
	cout<<"1. Sumar"<<endl;
	cout<<"2. Resta"<<endl;
	cout<<"3. Multiplicar"<<endl;
	cout<<"4. Dividir"<<endl;
	cout<<"5. Potencia"<<endl;
	cout<<"6. Raiz"<<endl;
	cout<<"0. Salir"<<endl;
	cout<<"Selecione una opcion: ";
	cin>>opcion;
	switch(opcion){
	case 1:
	cout<<"Ingrese un numero_1: ";
	cin>>*P_numero_1;
	cout<<"Ingrese un numero_2: ";
	cin>>*P_numero_2;
	*P_resultado=Suma(&numero_1,&numero_2);
	cout<<"El resultado de la suma es: "<<*P_resultado<<endl;
	break;
	case 2:
	cout<<"Ingrese un numero_1: ";
	cin>>*P_numero_1;
	cout<<"Ingrese un numero_2: ";
	cin>>*P_numero_2;
	*P_resultado=Resta(&numero_1,&numero_2);
	cout<<"El resultado de la suma es: "<<*P_resultado<<endl;
	break;
	case 3:
	cout<<"Ingrese un numero_1: ";
	cin>>*P_numero_1;
	cout<<"Ingrese un numero_2: ";
	cin>>*P_numero_2;
	*P_resultado=Producto(&numero_1,&numero_2);
	cout<<"El resultado de la suma es: "<<*P_resultado<<endl;
	break;
	case 4:
	cout<<"Ingrese un numero_1: ";
	cin>>*P_numero_1;
	cout<<"Ingrese un numero_2: ";
	cin>>*P_numero_2;
	*P_resultado=Cociente(&numero_1,&numero_2);
	cout<<"El resultado de la suma es: "<<*P_resultado<<endl;
	break;
	case 5:
	cout<<"Ingrese un numero_1: ";
	cin>>*P_numero_1;
	cout<<"Ingrese un numero_2: ";
	cin>>*P_numero_2;
	*P_resultado=Potencia(&numero_1,&numero_2);
	cout<<"El resultado de la suma es: "<<*P_resultado<<endl;
	break;
	case 6:
	cout<<"Ingrese un numero_1: ";
	cin>>*P_numero_1;
	cout<<"Ingrese un numero_2: ";
	cin>>*P_numero_2;
	*P_resultado=Raiz(&numero_1,&numero_2);
	cout<<"El resultado de la suma es: "<<*P_resultado<<endl;
	break;	
	case 0:
	cout<<"Saliendo"<<endl;
	break;
	default:
	cout<<"Opcion Invalida"<<endl;
	break;
	}
	}while(opcion!=0);
}

double Suma(double *P_numero_1,double *P_numero_2){
	return (*P_numero_1)+(*P_numero_2);
}

double Resta(double *P_numero_1,double *P_numero_2){
	return (*P_numero_1)-(*P_numero_2);
}

double Producto(double *P_numero_1,double *P_numero_2){
	return (*P_numero_1)*(*P_numero_2);
}

double Cociente(double *P_numero_1,double *P_numero_2){
	if (*P_numero_2==0)
	return 9999999999;
	else
	return (*P_numero_1)/(*P_numero_2);
}

double Potencia(double *P_numero_1,double *P_numero_2){
	return pow((*P_numero_1),(*P_numero_2));
}

double Raiz(double *P_numero_1,double *P_numero_2){
	return pow((*P_numero_1),(1/(*P_numero_2)));
}
