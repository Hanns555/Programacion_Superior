#include <iostream>
#include <stdio.h>

using namespace std;


#define PI 3.1416
#define perimetroCuadrado(l) (4*l)
#define perimetroCirculo(r) (2*r*PI)
#define perimetroTriangulo(l) (3*l)

#define areaCuadrado(h,b) (h*b)
#define areaTriangulo(h,b) ((b*h)/2) 
#define areaCirculo(r) ((r*r)*PI)

class AreasFiguras{
	public:
	double radio;
	double base;
	double altura;
	string figura;
	double area;

	AreasFiguras(){
		this-> radio=0;
		this-> altura=0;
		this-> base=0;
		this-> area=0;
		this-> figura="";
	}	
	
	
	void MenuAreas(){
		while (true){
			string opcion;
			printf("MENU ARIAS\n");
			printf("1. Cuadrado	\n");
			printf("2. Triangulo \n");
			printf("3. Circulo \n");
			cout<<"Ingrese una opcion: ";
			cin>>opcion;
			if (opcion=="0" || opcion=="Salir"){
				printf("Saliendo\n");
				break;
			}
			else if(opcion=="1"){
				figura="Cuadrado";
				this -> AreaCuadrado();
				break;
			}
			else if(opcion=="2"){
				figura="Triangulo";
				this -> AreaTriangulo();
				break;
			}
			else if(opcion=="3"){
				figura="Circulo";
				this -> AreaCirculo();
				break;
			}
			else{
				printf("Opcion Invalida \n");
			}
		}
	}

	double AreaCuadrado(){
		printf("Ingrese la base del cuadrado: ");
		cin>>base;
		printf("Ingrese la altura del cuadrado: ");
		cin>>altura;
		area=areaCuadrado(altura,base);
		printf("El area es: %.2f\n",area);
		return area;
	}
	double AreaTriangulo(){
		printf("Ingrese la base del triangulo: ");
		cin>>base;
		printf("Ingrese la altura del triangulo: ");
		cin>>altura;
		area=areaTriangulo(altura,base);
		printf("El area es: %.2f\n",area);
		return area;
	}
	double AreaCirculo(){
		printf("Ingrese el radio del circulo: ");
		cin>>radio;
		area=areaCirculo(radio);
		printf("El area es: %.2f\n",area);
		return area;
	}
};


class PerimetrosFiguras{
	public:
	double radio;
	double lado;
	string figura;
	double perimetro;

	PerimetrosFiguras(){
		this-> radio=0;
		this-> lado=0;
		this-> perimetro=0;
		this-> figura="";
	}	
	
	
	void MenuPerimetros(){
		while (true){
			string opcion;
			printf("MENU PERIMETROS\n");
			printf("1. Cuadrado	\n");
			printf("2. Triangulo \n");
			printf("3. Circulo \n");
			cout<<"Ingrese una opcion: ";
			cin>>opcion;
			if (opcion=="0" || opcion=="Salir"){
				printf("Saliendo\n");
				break;
			}
			else if(opcion=="1"){
				figura="Cuadrado";
				this -> PerimetroCuadrado();
				break;
			}
			else if(opcion=="2"){
				figura="Triangulo";
				this -> PerimetroTriangulo();
				break;
			}
			else if(opcion=="3"){
				figura="Circulo";
				this -> PerimetroCirculo();
				break;
			}
			else{
				printf("Opcion Invalida \n");
			}
		}
	}

	double PerimetroCuadrado(){
		printf("Ingrese el lado del cuadrado: ");
		cin>>lado;
		perimetro=perimetroCuadrado(lado);
		printf("El perimetro es: %.2f\n",perimetro);
		return perimetro;
	}
	double PerimetroTriangulo(){
		printf("Ingrese el lado del triangulo: ");
		cin>>lado;
		perimetro=perimetroTriangulo(lado);
		printf("El perimetro es: %.2f\n",perimetro);
		return perimetro;
	}
	double PerimetroCirculo(){
		printf("Ingrese el radio del circulo: ");
		cin>>radio;
		perimetro=perimetroCirculo(radio);
		printf("El perimetro es: %.2f\n",perimetro);
		return perimetro;
	}
};


void Menu(){
		AreasFiguras CalcArias;
		PerimetrosFiguras CalcPerimetros;
		while (true){
			string opcion;
			printf("MENU\n");
			printf("1. Calcular Areas\n");
			printf("2. Calcular Perimetros \n");
			cout<<"Ingrese una opcion: ";
			cin>>opcion;
			if (opcion=="0" || opcion=="Salir"){
				printf("Saliendo\n");
				break;
			}
			else if(opcion=="1"){
				CalcArias.MenuAreas();
			}
			else if(opcion=="2"){
				CalcPerimetros.MenuPerimetros();
			}
			else{
				printf("Opcion Invalida \n");
			}
		}
}


int main(){
	Menu();
	return 0;
}
