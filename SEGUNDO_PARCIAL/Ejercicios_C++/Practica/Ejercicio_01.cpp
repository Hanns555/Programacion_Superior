#include <iostream>
using namespace std;

class Libro{
//Atributos
private:
int codigo;
string titulo;
string autor;
bool disponible;
public:
Libro(){
	this -> codigo=codigo;
	this -> titulo=titulo;
	this -> autor=autor;
	this -> disponible=disponible;
}

void Ingresar_Datos(){
	string opcion;
	string*P_opcion=&opcion;
	cout<<"Ingrese el codigo del libro: ";
	cin>>codigo;
	cout<<"Ingrese el titulo del libro: ";
	cin>>titulo;	
	cout<<"Ingrese el autor del libro: ";
	cin>>autor;
	cout<<"Libro esta disponible: "<<endl;
	cout<<"1.Si"<<endl;
	cout<<"2.No"<<endl;
	cin>>*P_opcion;
	if(opcion=="1" || opcion=="Si")
	disponible=true;
	else
	disponible=false;
}

void mostrarInformacion(){
	cout<<"El codigo del libro es: "<<codigo<<endl;
	cout<<"El titulo del libro es: "<<titulo<<endl;
	cout<<"El autor del libro es: "<<autor<<endl;
	if(disponible)
	cout<<"El libro esta disponible"<<endl;
	else
	cout<<"El libro no esta disponible"<<endl;
}

int ObtenerCodigo(int codigo){
	return codigo;
}
	
};

class Biblioteca{
	public:
	Libro*lista_libros=new Libro[9];

	void Ingresa_Libros(){
		int opcion;
		int*P_opcion=&opcion;
		Libro Book;
		Libro *P_Book=&Book;
		cout<<"Ingrese la cantidad de libros a registrar: ";
		cin>>*P_opcion;
		for(int i=0;i<*P_opcion;i++){
			(P_Book)->Ingresar_Datos();
			lista_libros[i]=*P_Book;
		}
	}
	
	void MostrarLista_Libros(){
			cout<<"Lista de todos los libros"<<endl;		
			for(int i=0;i<9;i++){
				(lista_libros+i)->mostrarInformacion();
			}
	}

	void BuscarCodigo(){
		int codigo;
		int*P_codigo=&codigo;
		cout<<"Ingrese el Codigo del Libro: ";
		cin>>*P_codigo;
		for(int i=0;i<9;i++){
		(lista_libros+i)->ObtenerCodigo();
		}
	}
};

int main(){
	Biblioteca Hola;
	Hola.Ingresa_Libros();
	Hola.MostrarLista_Libros();
	return 0;
}
