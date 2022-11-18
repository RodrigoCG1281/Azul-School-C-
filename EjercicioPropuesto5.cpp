/*5.- Crea un programa que calcule el área de la siguiente figura: */

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int radio, lado, valC, valT;

    //area de una circunferencia es: PI * radio^2
    //area de un triangulo (b * altura)/2

    cout<<"Ingrese el valor del radio: "<<endl;
    cin>>radio;

    cout<<"Ingrese el valor del lado: "<<endl;
    cin>>lado;

    valC = (M_PI * radio * radio)/2;
    valT = (2 * radio * lado)/2;

    cout<<"El area es: "<<valC + valT;


    return 0;
}