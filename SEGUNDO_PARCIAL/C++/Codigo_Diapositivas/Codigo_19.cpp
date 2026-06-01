#include <iostream>
#include <vector>

using namespace std;

class Laptops{
	public:
		string nombre;
		string marca;
		double precio;
		bool en_promocion;
		double precio_promo;

		Laptops(){
			this-> nombre="";
			this-> marca="";
			this-> precio=0;
			this-> en_promocion=false;
			this-> precio_promo=0;
		}

		void IngresarLaptops(){
			string opcion="";
			cout<<"Ingrese el nombre: ";
			cin>>nombre;
			cout<<"Ingrese la marca: ";
			cin>>marca;
			cout<<"Ingrese el precio: ";
			cin>>precio;
			while(true){	
				cout<<"En promo: \n";
				cout<<"1. Si\n";
				cout<<"2. No\n";
				cin>>opcion;
				if(opcion=="1"){
					en_promocion=true;
					break;
				}
				else if(opcion=="2"){
					en_promocion=false;
					break;
				}
				else{
					printf("Opcion Invalida\n");
				}
			}
		}

		void Mostrar_Datos(){
			printf("Nombre: %s\n",nombre.c_str());
			printf("Marca: %s \n",marca.c_str());
			printf("Precio: %.2f \n",precio);
			if(en_promocion){
				this-> CalcularPromo();
				printf("Precio Promo: %.2f \n",precio_promo);
			}
			else{
				printf("No esta en promo\n");
			}
		}

		double CalcularPromo(){
			precio_promo=precio-(precio*0.1);
			return precio_promo;
		}
};

void MostrarLaptops(vector <Laptops>* Lista_Laptops){
	for(size_t i=0;i<(Lista_Laptops->size());i++){
		cout<<i+1<<". LAPTOP"<<endl;
		(*Lista_Laptops)[i].Mostrar_Datos(); 
	}
}


void RegistrarLaptops(){
	int cantidad;
	vector <Laptops> Lista_Laptops;
	Laptops Compus;
	cout<<"Ingrese cuantas laptops registrara: ";
	cin>>cantidad;
	for(int i=0;i<cantidad;i++){
		cout<<"EQUIPO "<<i+1<<endl;
		Compus.IngresarLaptops();
		//Compus.Mostrar_Datos();
		Lista_Laptops.push_back(Compus);
	}
	MostrarLaptops(&Lista_Laptops);
}

int main(){
	RegistrarLaptops();
	return 0;
}
