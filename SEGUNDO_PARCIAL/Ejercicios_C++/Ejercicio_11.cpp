#include <iostream>
using namespace std;

//ciclo basico con un solo int; new y usar delete

int main(){
	int x=0;
	int *acumulador_x=new int[5];
	while(x<5){
		acumulador_x=&x;
		x++;
	}
	x=0;
	cout<<"el arreglo es: "<<endl;
	while(x<5){
			cout<<*acumulador_x<<endl;
			x++;
	}
	delete [] acumulador_x;
	return 0;
}
