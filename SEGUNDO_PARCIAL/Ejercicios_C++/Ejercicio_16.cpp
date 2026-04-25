#include <iostream>
#include <stdexcept>
using namespace std;
int main(){
	int numeros[3]={1,2,3};
	/* Error de Salida de Rango
	for(int x=0;x<10;x++){
			cout<<numeros[x]<<endl
		}
	*/
	for(int x=0;x<10;x++){
		try{
			if(x<sizeof(numeros)/sizeof(numeros[0])){
			cout<<numeros[x]<<endl;
			}
			else{
			string e="Fuera de Rango";
			throw e;
			}
		}
		catch(string& e){
			cout<<"Error encontrado: "<<e<<endl;
		}
	}
	cout<<"Codigo terminado correctamente"<<endl;
	return 0;
}
