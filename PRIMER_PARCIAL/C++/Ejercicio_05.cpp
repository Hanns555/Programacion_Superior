#include <iostream>
#define  PI 3.14159
#define Dato PI
#define Numeros 1, \
                2, \
                3, \
                4
using namespace std;
int main(){
    cout<< PI<<endl;
    cout<< Dato<<endl;
    /*Usar Macros Multilinea*/
    int array[] = {Numeros};
    cout << array[1]<<endl;
    return 0;
}