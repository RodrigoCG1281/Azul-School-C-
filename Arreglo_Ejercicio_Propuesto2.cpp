/*2.- Crea un programa en C++ donde el usuario ingrese 10 números, 5 para un array y 5 para otro array distinto. Mostrar los 10 números 
en pantalla mediante un solo array.
 */

#include <iostream> 
using namespace std;

int main(){
    int a1[5],a2[5],a3[10];

    for(int i = 0;i<5;i++){
        cout<<"Ingrese un numero: "; cin>>a1[i];
    }

    for(int i = 0;i<5;i++){
        cout<<"Ingrese otro numero: "; cin>>a2[i];
    }

    for(int i = 0;i<5;i++){
        a3[i] = a1[i];      
    }

    for(int i = 0;i<5;i++){
        a3[i+5] = a2[i];
    }

    for(int i = 0;i<=9;i++){
        cout<<a3[i]<<endl;
    }


    return 0;
}