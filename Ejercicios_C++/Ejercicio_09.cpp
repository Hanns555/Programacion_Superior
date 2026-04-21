#include <iostream>
#include <vector>
using namespace std;

class Comidas{
    //Atributos
    private:
    double Precio;
    protected:
    string Ingredientes; 
    public:
    string Nombre;
    string Ciudad;

    //Constructor
    Comidas(){
        this -> Precio=Precio;
        this -> Ingredientes=Ingredientes;
        this -> Nombre=Nombre;
        this -> Ciudad=Ciudad;
    }

    //Metodos
    void Ingresar_Datos(){
        int cantidad;
        cout<<"Ingrese su nombre: ";
        cin>>Nombre;
        cout<<"Ingrese su ciudad: ";
        cin>>Ciudad;
        cout<<"Ingrese su precio: ";
        cin>>Precio;
    }
    void Mostrar_Comida(){
        cout<<"Nombre: "<<Nombre<<endl;
        cout<<"Ciudad: "<<Ciudad<<endl;
        cout<<"Precio: "<<Precio<<endl;
    }

    void Mostrar_Plato(){
       cout<<"Nombre: "<<Nombre<<endl;
    }
};


class Ingredientes:public Comidas{
    protected:
    //Atributos 
    vector<string>Lista_Ingredientes;
    string Ingrediente;
    public:
    //Constructor
    Ingredientes(){
        this -> Lista_Ingredientes=Lista_Ingredientes;
        this -> Ingrediente=Ingrediente;
    }
    //Metodos
    void Registrar_Ingredientes(){
        int cantidad;
        cout<<"Ingrese la cantiad de ingredientes: ";
        cin>>cantidad;
        for(int i=0;i<cantidad;i++){
            cout<<i+1<<". ";
            cin>>Ingrediente;
            Lista_Ingredientes.push_back(Ingrediente);
        }
    }
    void Mostrar_Ingredientes(){
        for(int i=0;i<Lista_Ingredientes.size();i++){
            cout<<i+1<<". "<<Lista_Ingredientes[i]<<endl;
        }
    }
};

void Menu();
void Menu_Detalle(vector<Ingredientes>*P_Registro_Receta);
void Mostrar_Receta(vector<Comidas>*P_Lista_Comidas,vector<Ingredientes>*P_Registro_Receta);

int main(){
    Menu();
    return 0;
}

void Menu(){
    int Opcion;
    int *P_Opcion;
    P_Opcion=&Opcion;
    //Comida Registro
    vector<Comidas>Lista_Comidas;
    vector <Comidas>*P_Lista_Comidas;
    P_Lista_Comidas=&Lista_Comidas;
    Comidas Meal;
    Comidas*P_Meal;
    P_Meal=&Meal;

    //Ingredientes Registro
    vector<Ingredientes> Registro_Receta;
    do{
        cout<<"1. Ingresar Comida \n";
        cout<<"2. Mostrar Menu \n";
        cout<<"3. Mostrar Receta \n";
        cout<<"0. Salir \n";
        cout<<"Selecione una opcion: ";
        cin>>*P_Opcion;
        switch(Opcion){
            case 1:
            cout<<"Ingrese la cantidad de comidas a registrar: ";
            cin>>*P_Opcion;
            for(int i=0;i<*P_Opcion;i++){
                cout<<"Comida ["<<i+1<<"]"<<endl;
                P_Meal -> Ingresar_Datos();
                Menu_Detalle(&Registro_Receta);
                Lista_Comidas.push_back(*P_Meal);
            }
            break;
            case 2:
            for(int i=0;i<Lista_Comidas.size();i++){
                cout<<"Comida ["<<i+1<<"]"<<endl;
                (*P_Lista_Comidas)[i].Mostrar_Comida();
            }
            break;
            case 3:
            Mostrar_Receta(&Lista_Comidas,&Registro_Receta);
            break;
            case 0:
            cout<<"Saliendo"<<endl;
            break;
            default:
            cout<<"Opcion Invalida"<<endl;
            break;
        }
    }while(Opcion!=0);
}

void Menu_Detalle(vector<Ingredientes>*P_Registro_Receta){
    int Opcion;
    int *P_Opcion;
    P_Opcion=&Opcion;
    Ingredientes Registro_Ingredientes;
    Ingredientes*P_Resgistro_Ingredientes=&Registro_Ingredientes;
    do{
        cout<<"1. Registrar Ingredientes \n";
        cout<<"2. Mostrar Ingredientes \n";
        cout<<"0. Salir \n";
        cout<<"Selecione una opcion: ";
        cin>>*P_Opcion;
        switch(Opcion){
            case 1:
            P_Resgistro_Ingredientes -> Registrar_Ingredientes();
            P_Registro_Receta -> push_back(*P_Resgistro_Ingredientes);
            break;
            case 2:
            P_Resgistro_Ingredientes -> Mostrar_Ingredientes();
            break;
            case 0:
            cout<<"Saliendo"<<endl;
            break;
            default:
            cout<<"Opcion Invalida"<<endl;
            break;
        }
    }while(Opcion!=0);
}

void Mostrar_Receta(vector<Comidas>*P_Lista_Comidas,vector<Ingredientes>*P_Registro_Receta){
    int Opcion;
    cout<<"Selecione una Comida a mostrar receta"<<endl;
    for(int i=0;i<(P_Lista_Comidas)->size();i++){
        cout<<"Comida ["<<i+1<<"]\n";
        (*P_Lista_Comidas)[i].Mostrar_Plato();
    }
    cin>>Opcion;
    cout<<"La receta es: \n";
    (*P_Registro_Receta)[Opcion-1].Mostrar_Ingredientes();
}