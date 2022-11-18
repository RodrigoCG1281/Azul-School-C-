/*3.- La calificación final de un estudiante es el promedio de tres notas: 
la nota de prácticas que cuenta un 30% del total, la nota teórica que cuenta un 60% y 
la nota de participación que cuenta el 10% Escriba un programa que lea las tres notas del 
alumno y escriba su nota final.*/

#include <iostream>

using namespace std;

int main(){
    float nota_practica, nota_teorica, nota_participacion, promedio = 0;

    cout<<"Ingrese sus 3 notas, primero la practica luego teorica y finalmente la de partcipacion"<<endl;
    cin>>nota_practica;
    cin>>nota_teorica;
    cin>>nota_participacion;

    nota_practica = nota_practica * 3/10;
    nota_teorica = nota_teorica * 6/10;
    nota_participacion = nota_participacion * 1/10;

    //promedio = nota_practica * (30/100) + nota_teorica * (60/100) + nota_participacion * (10/100);
    promedio = nota_practica + nota_teorica + nota_participacion;

    cout<<"Su promedio final es: "<<promedio;


    return 0;
}