#include <iostream>
using namespace std;

void pass(int*x,int*y);

int main(){
    int x=10;
    int y=20;
    cout<<"Los valores de x y y son: "<<x<<" , "<<y<<endl;
    pass(&x,&y);
    cout<<"Los ahora valores de x y y son: "<<x<<" , "<<y<<endl;
    return 0;
}

void pass(int*x,int*y){
    *x=20;
    *y=10;
}