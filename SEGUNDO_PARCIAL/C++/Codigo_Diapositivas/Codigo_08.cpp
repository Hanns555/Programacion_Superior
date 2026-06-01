#include <iostream>
#include <string>
#include <stdio.h>

#define Carreras "mecatronica", "sistemas", "biomedica"

using namespace std;

string Seleccion(){
	string carreras[]={Carreras};
	int tamanio=sizeof(carreras)/sizeof(carreras[0]);
	int opcion;
	while(true){
		for (int i=0; i<tamanio;i++){
				cout<<i+1<<". "<<carreras[i]<<endl;
			}
		cout<<"Selecione una opcion: ";
		cin>>opcion;
		if (opcion==1){
			return carreras[opcion-1];
		}
		else if(opcion==2){
			return carreras[opcion-1];
		}
		else if (opcion==3){
			return carreras[opcion-1];
		}
		else{
			printf("Opcion Invalida\n");
		}
	}
}

void Mensaje(string*carreras){
	string opcion=Seleccion();
	if(carreras[0]==opcion){
		printf("Te toca la materia de IMT131 en 5 semestre\n");
	}
	else if(carreras[1]==opcion){
		printf("Te toca la materia de IMT131 en 3 semestre\n");	
	}
	else if(carreras[2]==opcion){
		printf("Te toca la materia de IMT131 en 4 semestre\n");
	}
}

int main(){
	string carreras[]={Carreras};
	Mensaje(&carreras[0]);
	return 0;
}
