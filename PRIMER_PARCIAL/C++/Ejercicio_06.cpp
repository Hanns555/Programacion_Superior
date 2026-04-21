//funciones con macros define
#include <iostream>
#define PI 3.1416
#define Area(r)  ((r) * (r) * PI)  
using namespace std;
int main(){
    int radio = 5;
    cout<< Area(radio)<<endl;
    return 0;
}