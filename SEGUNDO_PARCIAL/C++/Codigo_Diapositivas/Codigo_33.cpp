#include <iostream>

using namespace std;

#define precio_desayuno 40
#define precio_almuerzo 100
#define precio_cena 60

class comida{
	public:
	virtual double CostoComida()=0;
	virtual void IngresarDatos()=0;
	protected:
	double precio;
};	

class desayuno: public comida{
	public:
	int hora;
	string tipo_comida;

	desayuno(int hora, string tipo_comida){
		this->hora=hora;
		this->tipo_comida=tipo_comida;
		this->precio=precio_desayuno;
	}

	desayuno(){
		this->hora=0;
		this->tipo_comida="";
		this->precio=precio_desayuno;
	}

	void IngresarDatos(){
		cout<<"Ingrese el tipo comida: ";
		cin>>tipo_comida;
		cout<<"Ingrese la hora: ";
		cin>>hora;
	}

	double CostoComida(){
		if (hora>8){
			int extra=hora-8;
			precio+=20*extra;
		}
		return precio;
	}
};

class almuerzo: public comida{
	public:
	bool sopa;
	bool postre;

	almuerzo(bool sopa, bool postre){
		this->sopa=sopa;
		this->postre=postre;
		this->precio=precio_almuerzo;
	}

	almuerzo(){
		this->sopa=false;
		this->postre=false;
		this->precio=precio_almuerzo;
	}

	void IngresarDatos(){
		while(true){
			string opion="";
			cout<<"Tiene Sopa:"<<endl;
			cout<<"1. Si\n";
			cout<<"2. No\n";
			cout<<"Elija una opcion: ";
			cin>>opion;
			if(opion=="1"){
				sopa=true;
				break;
			}
			else if (opion=="2"){
				break;
			}
			else{
				printf("Opcion Invalida\n");
			}	
		}
		while(true){
			string opion="";
			cout<<"Tiene Postre:"<<endl;
			cout<<"1. Si\n";
			cout<<"2. No\n";
			cout<<"Elija una opcion: ";
			cin>>opion;
			if(opion=="1"){
				postre=true;
				break;
			}
			else if (opion=="2"){
				break;
			}
			else{
				printf("Opcion Invalida\n");
			}	
		}
	}

	double CostoComida(){
		if (sopa){
			precio+=10;
		}
		if(postre){
			precio+=10;
		}
		return precio;
	}
};

class cena: public comida{
	public:
	int hora;
	int personas;

	cena(int hora, int personas){
		this->hora=hora;
		this->personas=personas;
		this->precio=precio_cena;
	}

	cena(){
		this->hora=0;
		this->personas=0;
		this->precio=precio_cena;		
	}

	void IngresarDatos(){
		cout<<"Ingrese la hora: ";
		cin>>hora;
		cout<<"Ingrese las personas: ";
		cin>>personas;
	}

	double CostoComida(){
		double precioBase=precio;
		for(int i=0;i<personas;i++){
			precio+=0.7*precioBase;
		}
		return precio;
	}
};



int main(){
	desayuno ComidaManiana;
	almuerzo ComidaTarde;
	cena ComidaNoche;
	printf("Desayuno\n");
	ComidaManiana.IngresarDatos();
	printf("Costo desayuno: %f\n",ComidaManiana.CostoComida());
	printf("Almuerzo\n");
	ComidaTarde.IngresarDatos();
	printf("Costo almuerzo: %f\n",ComidaTarde.CostoComida());
	printf("Cena\n");
	ComidaNoche.IngresarDatos();
	printf("Costo Cena: %f\n",ComidaNoche.CostoComida());
	return 0;
}
