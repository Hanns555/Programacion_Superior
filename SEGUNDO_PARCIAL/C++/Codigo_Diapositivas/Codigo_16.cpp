#include <iostream>
#include <stdio.h>

using namespace std;

int valor(int x){
	x=50;
	return x;
}


int main(){
	int x=30;
	int resultado=valor(x);
	cout<<"El valor de x es: "<<x<<endl;
	return 0;
}
