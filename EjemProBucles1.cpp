/* Con un bucle For 1.- Que pida un número y diga si es primo o no.*/

#include <iostream>
//un numero es primo si solo es divisible por si mismo y por 1 

using namespace std;
int main(){
    int numero;
    cout<<"Ingrese un numero: "<<endl; cin>> numero;

    if((numero % 2 != 0) && (numero/1 ==numero) && (numero/numero == 1)){
        cout<<"Es primo";
    }
    else{
        cout<<"No es primo";
    }



    return 0;
}