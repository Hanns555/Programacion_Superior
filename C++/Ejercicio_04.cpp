#include <iostream>
using namespace std;
int main(){
    const int hora_a_minutos = 60;
    int horas;
    cout << "Ingrese las horas (formato 0-24): ";
    cin >> horas;
    cout <<"Las horas en minutos son: "<<horas * hora_a_minutos<<endl;
    return 0;
}