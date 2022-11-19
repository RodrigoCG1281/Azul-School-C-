//Ver si el ciudadano es mayor de edad
#include <iostream>

using namespace std;

int main(){
    int edad = 0;
    cout<<"Ingrese su edad: "; cin>>edad;

    if(edad >= 18){
        cout<<"Es mayor de edad";
    }
    else{
        cout<<"Es menor de edad";
    }

    return 0;
}
