//Escriba un programa que convierta una temperatura de 86 grado farenheit a su equivalente en grados centígrados.
//La fórmula para convertir es grados Farenheit a grados Centígrados es la siguiente: Centigrados = (5/9)*(Farenheit - 32)

#include <iostream>

using namespace std;

int main(){

    int temperatura_farenheit = 86;
    int nueva_temperatura = 0;

    nueva_temperatura = (5.0/9) * (temperatura_farenheit - 32);

    cout<<"La temperatura en Centigrados es: "<<nueva_temperatura; 

    return 0;
}