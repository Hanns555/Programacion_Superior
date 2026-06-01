#include <iostream>
using namespace std;

int main(){
	const int horas_a_minutos=60;
	int horas;
	cout<<"Ingrese las horas (formato 0-24): "<<endl;
	cin>>horas;
	cout<<"Las horas en minutos son: "<<horas*horas_a_minutos<<endl;
	return 0;
}
