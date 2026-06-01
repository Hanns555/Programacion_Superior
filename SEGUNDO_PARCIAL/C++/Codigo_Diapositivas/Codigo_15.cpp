#include <iostream>
#include <stdio.h>

using namespace std;

int suma(int x,int y){
	int z=x+y;
	return z;
}

void suma(int*x,int*y){
	int z=*x+*y;
	cout<<"La suma es: "<<z<<endl;
}

int main(){
	int num1,num2;
	cout<<"Ingrese 2 numeros a sumar \n";
	cin>>num1;
	cin>>num2;
	int resultado =suma(num1,num2);
	cout<<"La suma es: "<<resultado<<endl;
	suma(&num1,&num2);
	return 0;
}
