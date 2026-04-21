#include<iostream>
using namespace std;
int main(){
    int variable=5;
    int *Pvariable=&variable;
    cout<<variable<<endl;  //Valor Variable
    cout<<&variable<<endl; //Direccion Variable
    cout<<Pvariable<<endl; //Puntero con Direccion Variable
    return 0; 
}