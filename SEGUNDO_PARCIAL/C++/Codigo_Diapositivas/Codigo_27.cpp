#include <iostream>

using namespace std;

class Mascota{
	public:
		double tamanio;
		string habitad;	
		bool domestico;
		string especie;
		string sonido;
	Mascota(){
		this->tamanio=0;
		this->habitad="";
		this->domestico=false;
	    this->especie="";
	    this->sonido="";		
	}

	void IngresarDatosGenerales(){
		cout<<"Ingrese el tamanio del animal: ";
		cin>>tamanio;
		cout<<"Ingrese el habitad del animal: ";
		cin>>habitad;
	}
	void MensajePersonalizado(){
		printf("Soy un %s\n",especie.c_str());
	}
	void MostrarDatosMascota(){
		printf("Especie: %s\n",especie.c_str());
		printf("Tamanio: %.2f\n",tamanio);
		printf("Habitad: %s\n",habitad.c_str());
		printf("Sonido: %s\n",sonido.c_str());
		if(domestico){
			printf("Domestico: si\n");
		}
		else{
			printf("Domestico: no\n");
		}
	}
};

class perro: public Mascota{
	public: 
		perro():Mascota(){
			this->especie="perro";
			this->sonido="GUAU GUAU";
			this->domestico=true;
		}
};

class gato: public Mascota{
	public: 
		gato():Mascota(){
			this->especie="gato";
			this->sonido="MIAU MIAU";
			this->domestico=true;
		}
};

class tigre: public Mascota{
	public: 
		tigre():Mascota(){
			this->especie="tigre";
			this->sonido="GRRR GRRR";
			this->domestico=false;
		}
};

class elefante: public Mascota{
	public: 
		elefante():Mascota(){
			this->especie="elefante";
			this->sonido="SONIDO ELEFANTE";
			this->domestico=false;
		}
};

int main(){
	perro Mascota1;
	gato Mascota2;
	tigre Mascota3;
	elefante Mascota4;
	Mascota1.IngresarDatosGenerales();
	Mascota2.IngresarDatosGenerales();
	Mascota3.IngresarDatosGenerales();
	Mascota4.IngresarDatosGenerales();
	Mascota1.MostrarDatosMascota();
	Mascota1.MensajePersonalizado();
	Mascota2.MostrarDatosMascota();
	Mascota2.MensajePersonalizado();
	Mascota3.MostrarDatosMascota();
	Mascota3.MensajePersonalizado();
	Mascota4.MostrarDatosMascota();
	Mascota4.MensajePersonalizado();
	return 0;
}

