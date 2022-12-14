/*3.- Crea un programa en C++ donde el usuario ingrese 5 números, después estos números se debe de copiar a 
otro array multiplicados por 2 y muestre el segundo array.*/
#include<iostream> 
using namespace std; 

int main(){

    int a1[5], a2[5];

    for(int i = 0;i<5;i++){
        cout<<"Ingrese un numero: "; cin>>a1[i];
    }

    for(int i = 0;i<5;i++){
        a2[i] = a1[i]*2;
    }

    for(int i = 0;i<5;i++){
        cout<<a2[i]<<" ";
    }


    return 0;
}