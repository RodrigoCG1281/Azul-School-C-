/*
Suma de elementos de un arreglo, promedio de datos y elemento más 
grande del arreglo
*/
#include<iostream>

using namespace std;

int main(){
    int n = 5,  m = 3, suma = 0, promedio = 0, elemento_mas_grande = 0;
    int elementos[n];

    for(int i = 0;i<5;i++){
        cout<<"Ingrese un elemento: "<<endl; 
        cin>>elementos[i];

        suma = suma + elementos[i];

        if(elementos[i]>elemento_mas_grande){
            elemento_mas_grande = elementos[i];
        }
    }


    promedio = suma / 5;

    cout<<"La suma es: "<<suma<<endl<<"El elemento mas grande es: "<<elemento_mas_grande<<endl;
    cout<<"El promedio es: "<<promedio;
    



    return 0;
}