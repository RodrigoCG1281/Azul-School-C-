/*Escriba un programa en C++ para que calcula la longitud de una 
circunferencia de radio 15
La forumla para hallar la longitud de la circunferencia es la siguiente:
Longitud = pi * diametro
*/

#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int radio = 15;

    float longitud = 0;

    longitud = radio * 2 * M_PI;

    cout<<"La longitud es: "<<longitud;

    return 0;
}