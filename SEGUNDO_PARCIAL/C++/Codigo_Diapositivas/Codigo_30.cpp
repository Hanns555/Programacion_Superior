#include <iostream>

using namespace std;

class Musica{
	public:
		string nombre;
		int anio;
		int costo;
		int costo2;
		bool formato;
		int precio;

	Musica(string nombre,int anio,bool formato){
		this->anio=anio;
		this->formato=formato;
		this->nombre=nombre;
	}
		
	int calculoCosto(int anio,bool formato){
		this->PrecioAnio(anio);
		this->PrecioFormato(formato);
		precio=costo2+costo;
		return precio;
	}

	void PrecioAnio(int anio){
		if(anio>0 && anio<1920){
			costo=60;
		}
		else if(anio>=1920 && anio<1970){
			costo=55;
		}
		else if(anio>=1970 && anio<1990){
			costo=50;
		}
		else if(anio>=1990 && anio<=2010){
			costo=45;
		}
		else{
			costo=40;
		}
	}

	void PrecioFormato(bool formato){
		if(formato){
			costo2=40;
		}
		else{
			costo2=20;
		}
	}

	void calculoCosto(string nombre){
		if(anio>0 && anio<1920){
			printf("%s es muy antigua\n", nombre.c_str());
		}
		else if(anio>=1920 && anio<1970){
			printf("%s es antigua\n", nombre.c_str());
		}
		else if(anio>=1970 && anio<1990){
			printf("%s es antigua\n", nombre.c_str());
		}
		else if(anio>=1990 && anio<=2010){
			printf("%s es moderna\n", nombre.c_str());
		}
		else{
			printf("%s es moderna\n", nombre.c_str());
		}
	}
};

int main(){
	Musica Cancion1("Hola",2021,true);
	Musica Cancion2("Adios",1688,false);
	Musica Cancion3("XDXDXD",1987,true);
	printf("Presio: %d bs\n",Cancion1.calculoCosto(2021,true));
	Cancion1.calculoCosto("Hola");
	printf("Presio: %d bs\n",Cancion2.calculoCosto(1688,false));
	Cancion2.calculoCosto("Adios");
	printf("Presio: %d bs\n",Cancion3.calculoCosto(1987,true));
	Cancion3.calculoCosto("XDXDXD");
	return 0;
}
