#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    int x=1;
    cout<<"Ingrese un valor para n: ";
    cin >>n;
    while(x<=n){
        cout <<pow(n,x)<<endl;
        x+=1;
    }
    return 0;
}