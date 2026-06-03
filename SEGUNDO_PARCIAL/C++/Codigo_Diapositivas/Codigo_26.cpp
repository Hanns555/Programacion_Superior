#include <iostream>

using namespace std;

class Padre{
	public:
		void PadreObject(){
			cout<<"Soy la clase padre \n";
		}
};

class Hijo : public Padre{
	public:
		void HijoObject(){
			cout<<"Soy la clase hija \n";
		}
};


int main(){
	Hijo ObjetoHijo;
	ObjetoHijo.PadreObject();
	return 0;
}
