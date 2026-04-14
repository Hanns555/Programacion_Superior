#include <iostream>
using namespace std;


int suma (int x,int y);

int main(){
    int num1,num2,resultado;
    cout<<"Ingrese dos numeros: "<<endl;
    cin>>num1;
    cin>>num2;
    resultado = suma(num1,num2);
    cout<<"La suma es: "<< resultado<<endl;
    return 0;
}

int suma (int x,int y){
    return x+y;
}