/*Pedir dos numeros num1 y num2 para luego imprimir los numeros que estan dentro 
ejemplo: num1 = 3, num2 = 10 -> 4, 5, 6, 7, 8, 9 
El num1 tiene que ser menor al num2, verificar eso*/

#include <iostream>
using namespace std;

int main(){

    int num1, num2;
    cout<<"Nota: El numero 1 debe ser menor al numero 2"<<endl;
    cout<<"Ingrese dos numeros: "<<endl; cin>>num1>>num2;

    do{
        cout<<"El primer numero ingresado debe ser menor al segundo numero"<<endl;
        cout<<"Ingrese dos numeros otra vez: "<<endl; cin>>num1>>num2;
    }while(num1>num2);

    for(int i = num1 + 1 ;i<num2;i++){
        cout<<i<<" ";
    }
   
    return 0;
}