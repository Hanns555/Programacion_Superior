#include <iostream>
using namespace std;
//Uso de switch case

int main(){
	int dia=3;
	switch(dia){
		case 1:
		cout<<"Lunes"<<endl;
		break;
		case 2:
		cout<<"Martes"<<endl;
		break;
		case 3:
		cout<<"Miercoles"<<endl;
		break;
		case 4:
		cout<<"Jueves"<<endl;
		break;
		case 5:
		cout<<"Viernes"<<endl;
		break;
		case 6:
		cout<<"Sabado"<<endl;
		break;
		default:
		cout<<"Domingo"<<endl;
		break;
	}
	return 0;
}
