#include <iostream>
using namespace std;

int main(){
    string palabras[3]={"Adrian","Micaela","Hanns"};
    cout<<palabras<<endl;
    string *P_palabras;
    P_palabras=palabras;
    cout<<"Primer elemento: "<<*P_palabras<<endl;
    cout<<"Segundo elemento: "<<*(P_palabras+1)<<endl;
    cout<<"Tercer elemento: "<<*(P_palabras+2)<<endl;
    return 0;
}

