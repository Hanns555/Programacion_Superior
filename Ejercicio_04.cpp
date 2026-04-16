#include <iostream>

using namesapce std;

int main(){
	string palabras [3] = {"hola","como","estas"};
	cout<<palabras<<endl;
	string *Ppalabras;
	Ppalabras=palabras;
	cout<<"Primer elemento: "<<*Ppalabras<<endl;
	cout<<"Ultimo elemento: "<<*(Ppalabras-2)<<endl;
	return 0;
}
