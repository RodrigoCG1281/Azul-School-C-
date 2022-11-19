/*Realice un programa en C++ que calcule el aumento para un trabajador
segun su categoria:
categoria 1 = +15%
categoria 2 = +10%
categoria 3 = +8% 
categoria 4 = +7%*/
#include <iostream>
using namespace std;

int main(){

    int sueldo = 0, aumento = 0, opc;

    cout<<"Ingrese su sueldo: "<<endl; cin>>sueldo;

    cout<<"¿Cual es su categoria?"<<endl; cin>>opc;

    switch (opc)
    {
    case 1:

    aumento = sueldo * 15/100; //.15 --> 15%
    cout<<"Su aumento es de: "<<aumento; 

        break;
    case 2: 

    aumento = sueldo * 1/10;
    cout<<"Su aumento es de: "<<aumento;
        break;

    case 3:
    
    aumento = sueldo * 2/25;
    cout<<"Su aumento es de: "<<aumento;
        break;

    case 4:

    aumento = sueldo * 7/100;
    cout<<"Su aumento es de: "<<aumento;
        break;

    default:
    cout<<"Selecciono una opcion erronea";
        break;
    }

    cout<<endl;
    cout<<"Su sueldo en total es: "<<sueldo + aumento<<endl;

    return 0;
}