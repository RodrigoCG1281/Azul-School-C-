/*Escriba un programa que simule una calculadora
entrada: 2 numeros double y 1 operacion (+,-,*,/)
*/

#include <iostream>
using namespace std;

int main(){

    double a, b;
    char simbolo;

    cout<<"CALCULADORA BASICA DE 4 OPERACIONES"<<endl;

    cout<<"Ingrese dos numeros: "; cin>>a>>b;
    cout<<"Ingrese una operacion '+' '-' '*' '/' "; cin>>simbolo;

    switch (simbolo)
    {
    case '+':
        cout<<"La suma es: "<<a+b;
        break;
    case '-':
        cout<<"La resta es: "<<a-b;
        break;
    case '*':
        cout<<"La multiplicacion es: "<<a*b;
        break;
    case '/':
        cout<<"La division es: "<<a/b;
        break;
    default:
        cout<<"ERROR: "<<simbolo<<" No es una operacion valida";
        break;
    }

    return 0;
}