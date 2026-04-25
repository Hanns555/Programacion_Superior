#include <iostream>
using namespace std;
//Se rompe con numeros decimales y con cero 

class Calculadora{
		public: 
		double dividir(double a,double b){
			if(b==0){
				cout<<"Error: no se puede dividir entre 0"<<endl;
				return 0;
			}
			return a/b;
		}
};

int main(){
	Calculadora calc;
	double x,y;
	cout<<"Ingrese dos numeros: ";
	cin>>x>>y;
	double resultado=calc.dividir(x,y);
	cout<<"Resultado: "<<resultado<<endl;
	return 0;
}
