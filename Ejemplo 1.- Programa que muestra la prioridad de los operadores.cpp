// Progrma qu muestra la priorida de los operadores
#include <iostream>

using namespace std;

int main(){

    short int num1 = 5;
    short int num2 = 7;
    short int num3 = 9;
    short int resultado = 0;

    resultado = num1 * num2 + num3; //44

    cout<<"El resultado es: "<<resultado<<endl;

    resultado = num1 * (num2 + num3); // 80

    cout<<"El resultado es: "<<resultado<<endl;

    return 0;
}