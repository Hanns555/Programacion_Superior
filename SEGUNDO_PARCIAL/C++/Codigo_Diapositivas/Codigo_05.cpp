#include <iostream>
using namespace std;

//Macros
#define PI 3.1416
#define Dato PI

//Macro Multilinea
#define Numeros 1, \
				2, \
				3, \
				4

//Macro Tipo Funcion
#define AREA(r) (PI*(r)*(r))

int main(){
	int radio=5;
	int arr[]={Numeros};
	cout<<PI<<endl;
	cout<<Dato<<endl;
	for(int i : arr){
		cout<<i<<endl;
	}
	cout<<AREA(radio)<<endl;
	return 0;
}
