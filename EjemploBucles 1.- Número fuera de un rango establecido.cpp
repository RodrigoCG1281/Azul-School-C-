//Realizar un programa en C++ que ejecute un ciclo hasta que se ingrese un número fuera de un rango establecido

#include <iostream>
using namespace std;

int main(){

    //int a=0;
    int a = 1; //tiene que iniciar con 1 para que este pueda entrar al bucle
/*  while (a!=5)
    {
        cout<<"Ingrese un numero: "; cin>>a;
    }
*/
    while(a>=1 && a<=100){
        cout<<"Ingrese un numero: "; 
        cin>>a;
    }
    cout<<"El bucle a terminado";
    return 0;
}