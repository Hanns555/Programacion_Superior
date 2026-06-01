#include <iostream>

using namespace std;

class Mascotas{
	public:
	string nombre;
	string especie;
	int edad;
	bool sexo;
	bool vacunado;

	Mascotas(){
		this->nombre="";
		this->especie="";
		this->edad=0;
		this->sexo=false;
		this->vacunado=false;
	}

	void Ingresar_Mascota(){
		cout<<"Ingrese el nombre de la mascota: ";
		cin>>nombre;
		cout<<"Ingrese la especie de la mascota: ";
		cin>>especie;
		cout<<"Ingrese la edad de la mascota: ";
		cin>>edad;
		while(true){
			string opcion="";
			cout<<"Ingrese el sexo de la mascota: \n";
			printf("1. Macho\n");
			printf("2. Hembra\n");
			cin>>opcion;
			if(opcion=="1"){
				sexo=true;
				break;
			}
			else if (opcion=="2"){
				sexo=false;
				break;
			}
			else{
				printf("Opcion Invalida\n");
			}
		}
		while(true){
			string opcion="";
			cout<<"Vacunado: \n";
			printf("1. Si\n");
			printf("2. No\n");
			cin>>opcion;
			if(opcion=="1"){
				vacunado=true;
				break;
			}
			else if (opcion=="2"){
				vacunado=false;
				break;
			}
			else{
				printf("Opcion Invalida\n");
			}
		}																													
	}

	void MostrarMascota(){
		printf("Nombre: %s\n",nombre.c_str());
		printf("Especie: %s\n",especie.c_str());
		printf("Edad: %d\n",edad);
		if(sexo){
			printf("Sexo: macho\n");
		}
		else{
			printf("Sexo: hemnbra\n");
		}
		if(vacunado){
			printf("Vacunado: si\n");
		}
		else{
			printf("Vacunado: no\n");
		}		
	}		
};

class Veterinaria{
	public:
		string nombre;
		string especie;
		int edad;
		bool sexo;
		bool vacunado;
	//EjercicioReal
		Veterinaria(string especie,string nombre,int edad,bool sexo,bool vacunado){
			this->nombre=nombre;
			this->especie=especie;
			this->edad=edad;
			this->sexo=sexo;
			this->vacunado=vacunado;
			cout<<"Soy un "<<especie;
			cout<<" me llamo "<<nombre;
			cout<<" tengo "<<edad;
			if(sexo){
				cout<<" y soy macho ";
			}
			else{
				cout<<" y soy hembra ";
			}
			if(vacunado){
				cout<<"y estoy vacunado\n";
			}
			else{
				cout<<"y no estoy vacunado\n";
			}
		}	
};

int main(){
	//Mascotas Pets;
	//Pets.Ingresar_Mascota();
	//Pets.MostrarMascota();
	//Veterinaria Doggo,Sin_Nombre,Kitty,Tiny;
	Veterinaria Doggo("perrito","doggo",4,true,false);
	Veterinaria Sin_Nombre("perrito","sin nombre",2,true,true);
	Veterinaria Kitty("gatito","kitty",1,false,true);
	Veterinaria Tiny("hamster","tiny",0,true,false);
	return 0;
}
