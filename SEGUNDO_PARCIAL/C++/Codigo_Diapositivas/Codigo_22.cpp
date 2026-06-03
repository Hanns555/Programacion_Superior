#include <iostream>
using namespace std;

class VideoJuego{
	public:
	bool nuevo=false;
	bool fisico=false;
	bool consola=false;
	bool reciente=false;
	bool coleecionista=false;
	double precio=0;

	VideoJuego(){
		this->nuevo=false;
		this->fisico=false;
		this->consola=false;
		this->reciente=false;
		this->coleecionista=false;
		this->precio=0;
	}

	void IngresarEstado(){
		while(true){
			string opcion="";
			printf("Registro Videojuegos Estado\n");
			printf("1. Nuevo\n");
			printf("2. Usado \n");
			printf("Ingrese una opcion: \n");
			cin>>opcion;
			if(opcion=="1"||opcion=="Nuevo"){
				nuevo=true;
				break;
			}
			else if(opcion=="2"||opcion=="Usado"){
				nuevo=false;
				break;
			}
			else{
				printf("Opcion Invalida\n");
			}	
		}
	}

	void IngresarVersion(){
		while(true){
			string opcion="";
			printf("Registro Videojuegos Distribucion\n");
			printf("1. Digital\n");
			printf("2. Fisico \n");
			printf("Ingrese una opcion: \n");
			cin>>opcion;
			if(opcion=="1"||opcion=="Digital"){
				fisico=false;
				break;
			}
			else if(opcion=="2"||opcion=="Fisico"){
				fisico=true;
				break;
			}
			else{
				printf("Opcion Invalida\n");
			}	
		}
	}
	void IngresarEquipo(){
		while(true){
			string opcion="";
			printf("Registro Videojuego Equipo\n");
			printf("1. Consola\n");
			printf("2. PC \n");
			printf("Ingrese una opcion: \n");
			cin>>opcion;
			if(opcion=="1"||opcion=="Consola"){
				consola=true;
				break;
			}
			else if(opcion=="2"||opcion=="PC"){
				consola=false;
				break;
			}
			else{
				printf("Opcion Invalida\n");
			}	
		}
	}
	void IngresarTiempo(){
		while(true){
			string opcion="";
			printf("Registro Videojuegos Tiempo\n");
			printf("1. Reciente\n");
			printf("2. Antiguo\n");
			printf("Ingrese una opcion: \n");
			cin>>opcion;
			if(opcion=="1"||opcion=="Reciente"){
				reciente=true;
				break;
			}
			else if(opcion=="2"||opcion=="Antiguo"){
				reciente=false;
				break;
			}
			else{
				printf("Opcion Invalida\n");
			}	
		}
	}
	void IngresarColeccion(){
		while(true){
			string opcion="";
			printf("Registro Videojuegos Coleccion\n");
			printf("1. Coleccionista\n");
			printf("2. Normla\n");
			printf("Ingrese una opcion: \n");
			cin>>opcion;
			if(opcion=="1"||opcion=="Coleccionista"){
				coleecionista=true;
				break;
			}
			else if(opcion=="2"||opcion=="Normal"){
				coleecionista=false;
				break;
			}
			else{
				printf("Opcion Invalida\n");
			}	
		}
	}

	void RegistrarVideojuego(){
		this->IngresarEstado();
		this->IngresarVersion();
		this->IngresarEquipo();
		this->IngresarTiempo();
		this->IngresarColeccion();
		if(nuevo){precio+=40;}
		else{precio+=25;}
		if(fisico){precio+=25;}
		else{precio+=15;}
		if(consola){precio+=5;}
		else{precio+=2;}
		if(reciente){precio+=10;}
		if(coleecionista){precio+=20;}
		else{precio+=5;}
	}

	void MostrarPrecio(){
		printf("El precio es: %.2f $us \n",precio);
	}
};

int main(){
	VideoJuego Game;
	Game.RegistrarVideojuego();
	Game.MostrarPrecio();
	return 0;
}
