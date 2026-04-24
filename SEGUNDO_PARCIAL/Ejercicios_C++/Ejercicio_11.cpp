#include <iostream>
using namespace std;

//ciclo basico con un solo int; new y usar delete

int main(){
	int *acumulador_x=new int[5];
	for(int i=0;i<5;i++){
		acumulador_x[i]=(i+1);
	}
	for(int i=0;i<5;i++){
		cout<<acumulador_x[i]<<endl;
	}
	delete [] acumulador_x;
	return 0;
}
