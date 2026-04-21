#include <iostream>
using namespace std;
int main(){
    int x = 10;
    int*P_x =&x;
    cout<<"El valor de x es: "<<x<<endl;
    cout<<"La direccion de x es: "<<P_x<<endl;
    cout<<"El valor en direccion es: "<<*P_x<<endl;
    return 0;
}