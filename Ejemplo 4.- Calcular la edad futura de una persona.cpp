/*Escriba un programa que calcule la edad que tendrá el dia de su cumpleaños del año 2020
Asigne valores apropiados a su edad y al año actual
Si actualmente su edad es de 26 años y es el año 2017 */

#include <iostream>

using namespace std;

int main(){
    short int edadA = 26, añoA=2017, añoF=2020 ,edadF=0;

    edadF = (añoF - añoA) + edadA;

    cout<<"La edad futura es: "<<edadF;

    return 0;    
}