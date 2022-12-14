/*4.- Crea un programa en C++ donde el usuario ingrese 10 números, después estos se deben de guardar en un array
, para finalmente imprimir su promedio.*/
#include<iostream>
using namespace std;

int main(){
    int a[10],promedio = 0;

    for(int i = 0;i<9;i++){
        cout<<"Ingrese un numero: "; cin>>a[i];
        promedio = promedio + a[i];
    }

    promedio = promedio/10;

    cout<<"El promedio es: "<<promedio;

    return 0;
}