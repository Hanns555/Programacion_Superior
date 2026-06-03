#include <iostream>

using namespace std;

class Padre{
	public:
		void saludo(){
			cout<<"Soy la clase padre"<<endl;
		}
		Padre(int edad,string nombre){
			this->edad=edad;
			this->nombre=nombre;
		}
		void showData(){
			cout<<edad<<","<<nombre<<endl;
		}
	private:
		int edad;
		string nombre;
};

int main(){
	Padre objetoPadre(30,"Pepe");
	objetoPadre.saludo();
	objetoPadre.showData();
	return 0;
}
