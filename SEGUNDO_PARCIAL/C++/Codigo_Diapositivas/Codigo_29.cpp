#include <iostream>

using namespace std;

class Padre{
	public:
		void saludo(){
			cout<<"Soy la clase padre \n";
		}
};

class Hijo:public Padre{
	public:
		void saludo(){
			cout<<"Soy la clase hija \n";
		}
};

int main(){
	Padre Objeto1;
	Hijo Objeto2;
	Objeto1.saludo();
	Objeto2.saludo();
	return 0;
}
