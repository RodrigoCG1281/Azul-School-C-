/*1.- Escriba un programa con las siguientes expresiones como expresiones en C++ e imprima el resultado. 
Nota: Las variables a, b, c, d y f pueden inicializarse con cualquier valor.
    1. a/b+1
    2. a+b/c+d
    3. a+(b/c)/d+(e/f)
    4. a + b/c-d
*/

#include <iostream>
using namespace std;

int main(){

    float a = 3, b = 4, c = 5, d = 6, e = 9, f = 11;
    float resultado = 0;
    
    resultado = a/b + 1;
    cout<<"resultado 1 es: "<<resultado<<endl;
    
    resultado = (a+b)/(c+d);
    cout<<"resultado 2 es: "<<resultado<<endl;

    resultado = (a + (b/c))/(d + (e/f));
    cout<<"resultado 3 es: "<<resultado<<endl;

    resultado = a + (b/(c-d));
    cout<<"resultado 4 es: "<<resultado<<endl;

    return 0;
}