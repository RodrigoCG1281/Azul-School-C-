/*2.- Escriba un programa que lea las tres notas de un alumno 
y calcule la nota final media de dicho alumno (Promedio).*/

#include <iostream>

using namespace std;

int main(){
    float a, b, c, promedio = 0;

    cout<<"Ingrese sus 3 notas: "<<endl;
    cin>>a>>b>>c;

    promedio = (a+b+c)/3;

    cout<<"Su promedio es: "<<promedio;


    return 0;
}