#include <iostream>
#include <vector>

using namespace std;

class Persona{
	private:
	string nombre;
	int edad;
	string correo;
	string password;
	bool validez_password;

	public:
	Persona(){
		this->nombre="";
		this->edad=0;
		this->correo="";
		this->password="";
		this->validez_password=false;
	}	

	void CrearPersona(){
		cout<<"Ingrese el nombre de la persona: ";
		cin>>nombre;
		cout<<"Ingrese la edad de la persona: ";
		cin>>edad;
		cout<<"Ingrese el correo de la persona: ";
		cin>>correo;
		cout<<"Ingrese la contraña de la persona: ";
		cin>>password;
	}

	void MostrarPersona(){
		printf("Nombre: %s\n",nombre.c_str());
		printf("Edad: %d\n",edad);
		printf("Correo: %s\n",correo.c_str());
		printf("Contraseña: %s\n",password.c_str());
	}

	void VerificarContrasena(){
		if(password.length()>=6){
			printf("Contrasena Valida\n");
			validez_password=true;
		}
		else{
			printf("Contrasena Invalida\n");
		}
	}

	string ObtenerNombre(){
		return nombre;
	}
};

class RegistroPersonas{
	public:
	vector<Persona> ListaPersonas;
	Persona Streamer;

	RegistroPersonas(Persona Streamer,vector<Persona>ListaPersonas){
		this->Streamer=Streamer;
		this->ListaPersonas=ListaPersonas;
	}

	void BuscarPersona(){
		string opcion;
		bool mostrar=false;
		cout<<"Ingrese un nombre a buscar: ";
		cin.ignore();
		getline(cin,opcion);
		if(opcion!=""){
			for(size_t i=0; i<ListaPersonas.size();i++){
				if(opcion==ListaPersonas[i].ObtenerNombre()){
					ListaPersonas[i].MostrarPersona();
					mostrar=true;
				}
			}
			if(mostrar){
				printf("No existe el nombre de esa persona: ");
			}
		}
		else{
			for(Persona i:ListaPersonas){
				i.MostrarPersona();
			}
		}
	}
};

RegistroPersonas*ObtenerRegistro(RegistroPersonas*AppUsuarios){
	AppUsuarios -> BuscarPersona();
	return AppUsuarios;
}

void Registro_Personas(){
	Persona Streamer;
	vector<Persona>ListaPersonas;
	int personas_registrar;
	cout<<"Ingrese cuantas persona va a ingresar (max 5): ";
	cin>>personas_registrar;
	for(int i=0;i<personas_registrar;i++){
		cout<<"PERSONA"<<i+1<<endl;
		Streamer.CrearPersona();
		if(i<5){
			ListaPersonas.push_back(Streamer);
		}
	}	
	//Hanns.MostrarPersona();
	//Hanns.VerificarContrasena();
	RegistroPersonas AppUsuarios(Streamer,ListaPersonas);
	ObtenerRegistro(&AppUsuarios);
}



int main(){
	Registro_Personas();
	return 0;
}
