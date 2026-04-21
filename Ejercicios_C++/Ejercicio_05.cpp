#include <iostream>
using namespace std;

int valor(int&x);

int main(){
    int x=20;
    int resultado=valor(x);
    cout<<"El valor de x es: "<<x<<endl;
    return 0;
}

int valor(int&x){
    x=50;
    return x;
}