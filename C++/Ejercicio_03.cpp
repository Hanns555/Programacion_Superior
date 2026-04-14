#include <iostream>
using namespace std;

void Pedir_Datos();
double suma(double x, double y);
double resta(double x, double y);
double producto(double x, double y);
double division(double x, double y);

int main(){
    Pedir_Datos();
    return 0;
}
void Pedir_Datos(){
    double numero1,numero2;
    cout<<"Ingrese un numero1: ";
    cin>>numero1;
    cout<<"Ingrese un numero2: ";
    cin>>numero2;
    cout<<"La suma es: "<<suma(numero1,numero2)<<endl;
    cout<<"La resta es: "<<resta(numero1,numero2)<<endl;
    cout<<"La producto es: "<<producto(numero1,numero2)<<endl;
    cout<<"La division es: "<<division(numero1,numero2)<<endl;
}
double suma(double x, double y){
    return x+y;
}
double resta(double x, double y){
    return x-y;
}
double producto(double x, double y){
    return x*y;
}
double division(double x, double y){
    if (y == 0)
    return 9999999;
    else
    return x/y;
}