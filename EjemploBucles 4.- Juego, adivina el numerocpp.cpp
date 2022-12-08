/*
Juego en C++ el numero, el jugador 1 debe de ingresar un numero, el jugador 2 debe
de avidinar cual numero ingreso

El juego debe de mostrar en pantalla si el numero ingresado por jugador 2 es mayor o
menor que el numero del jugador1, esto en caso de que el jugador 2 no ingrese el 
numero correcto. Solo existen 10 intentos.
*/
#include <iostream>
using namespace std;

int main(){
    int num1 = 0, num2 = 0, i = 1, contador=10;

    cout<<"Jugador 1: Ingrese un valor :";
    cin>>num1;

    do{
        cout<<"Te quedan "<<contador<<" intentos"<<endl;
        cout<<"Jugador 2: Ingrese su numero adivinador: "<<endl; 
        cin>>num2;

        if(num1 > num2){
            cout<<"El numero por adivinar es mayor que el suyo"<<endl;
            i++;
            contador--;
        }
        else if(num1 < num2){
            cout<<"El numero por adivinar es menor que el suyo"<<endl;
            contador--;
        }
        else{
            cout<<"ACERTO!";
            break;
        }
    }while(i<=10);


    return 0;
}