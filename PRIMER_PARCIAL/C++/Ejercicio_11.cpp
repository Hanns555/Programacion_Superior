#include <iostream>
#include <string.h>

using namespace std;

int main(){
    string word;
    string inverted = "";
    cout<<"Ingrese una palabra: ";
    getline(cin,word);
    for(int i = (word.length()-1); i>= 0;i--){
        inverted = inverted + word[i];
    }
    cout<<inverted<<endl;
    return 0;
}