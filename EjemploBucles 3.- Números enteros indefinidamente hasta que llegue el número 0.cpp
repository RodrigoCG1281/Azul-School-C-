/*Escribe un programa en C++ que lea numeros enteros indifinademente
hasta que llegue el numero 10
*/
#include <iostream>
using namespace std;

int main(){
    int num = 0;

    do{
        cout<<"Esta linea se ejecutara una vez"<<endl;
        
        cout<<"Ingrese un numero, 'si es 10 se cancela el bucle'"<<endl;
        cin>>num;
    }
    while(num != 10);



    return 0; 
}