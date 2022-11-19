//Solicitar edad, sexo y pais de una persona para luego mostrar si es mayor de edad
// Edad mayor igual a 18 = mayor de edad 
// en sexo poner la opcion de M/F
// y en el pais considerar  1.Perú 2.México 3.Argentina 4.Brasil

#include <iostream>

using namespace std;

int main(){
    int edad;
    char sexo;
    int pais;


    cout<<"Ingrese su edad: "; cin>> edad;
    cout<<"Ingrese su sexo(M/F): "; cin>>sexo;
    cout<<"Ingrese su pais: 1.Peru 2.Mexico 3.Argentina 4.Brasil "; cin>>pais;

    if(sexo = 'M'){
        cout<<"Es hombre"<<endl;
    }
    else if(sexo = 'F'){
        cout<<"Es Mujer"<<endl;
    }
    else{
        cout<<"Eres cabrito papi"<<endl;
    }

    if(edad>=18){
        cout<<"Es mayor de edad"<<endl;
    }
    else{
        cout<<"Es menor de edad"<<endl;
    }

    if(pais == 1){
        cout<<"Es peruano"<<endl;
    }
    else if(pais == 2){
        cout<<"Es mexicano"<<endl;
    }
    else if(pais == 3){
        cout<<"Es Argentino"<<endl;
    }
    else if(pais == 4){
        cout<<"Es Brasileño"<<endl;
    }
    else{
        cout<<"No sabemos que es paps"<<endl;
    }


    return 0;
}
