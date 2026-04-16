#include <iostream>
using namespace std;
int main(){
int Datos[3]={1, 2 ,3};

int *DatosP[3];
for(int i=0;i<3;i++){
DatosP[i]=&Datos[2-i];
cout<<*DatosP[i]<<endl;
}

int *DatosP2[3];
for(int i=0;i<3;i++){
DatosP2[i]=&Datos[i];
cout<<*DatosP2[i]<<endl;
}
return 0;
}
