#include <iostream>

using namespace std;

#define intereses(capital,tasa_interes,tiempo) capital*(tasa_interes/100.0)*(tiempo/12.0)

class Persona_Intereses{
	private:
	double capital;
	double interes;
	int capital_interes;
	public: 
	string nombre;
	double tasa_interes;
	int tiempo;

	Persona_Intereses(){
		this-> nombre="";
		this-> capital=0;
		this-> interes=0;
		this-> tiempo=0;
		this-> tasa_interes=0;
		this-> capital_interes=0;
	}	

	void Ingresar_Capital(){
		cin.ignore();
		cout<<"Ingre el nombre de la persona: ";
		getline(cin,nombre);
		cout<<"Ingrese el capital de la persona: ";
		cin>>capital;
		cout<<"Ingrese el tiempo de interes: ";
		cin>>tiempo;
		this->CalcularTiempo();
		cout<<"Ingrese la tasa de interes: ";
		cin>>tasa_interes;
	}

	void CalcularTiempo(){
		while(true){
			string opcion="";
			cout<<"1. Meses"<<endl;
			cout<<"2. Anios"<<endl;
			cout<<"Selecione una opcion: ";
			cin>>opcion;
			if(opcion=="1"){
				break;
			}
			else if(opcion=="2"){
				tiempo=12*tiempo;
				break;
			}
			else{
				printf("Opcion Invalida\n");
			}
		}
	}

	void MostrarDatos(){
		printf("%s : Tasa de interes = %.2f%% : Tiempo de interes: %d meses\n",nombre.c_str(),tasa_interes,tiempo);
	}

	double CalcularInteres(){
		interes=intereses(capital,tasa_interes,tiempo);
		printf("La persona tiene de interes de %.2f \n",interes);
		return interes;
	}
};



int main(){
	Persona_Intereses Xavier;
	Xavier.Ingresar_Capital();
	Xavier.MostrarDatos();
	Xavier.CalcularInteres();
	return 0;
}
