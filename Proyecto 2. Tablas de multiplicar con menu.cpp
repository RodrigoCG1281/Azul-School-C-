/*Realice un programa en C++ para mostrar las tablas de multiplicar. El programa debe 
de mostrar un menú con las tablas del 1 al 10, el usuario debe de elegir cual tabla 
desea que se imprima en pantalla, el usuario también puede elegir hasta qué número 
se va a mostrar la tabla, por ejemplo la tabla del 5 hasta el número 20. 
Al final de mostrar la tabla el usuario puede elegir si desea regresar al menú o
 finalizar el programa. Se utiliza If, While o Do While y For.*/
#include <iostream>
using namespace std;

int main(){
    int tabla, limite;
    char opc;

    cout<<"TABLAS DE MULTIPLICAR - Escoge una tabla"<<endl;
    cout<<"Tabla del 1 - Tabla del 2 - Tabla del 3 - Tabla del 4 - Tabla del 5"<<endl;
    cout<<"Tabla del 6 - Tabla del 7 - Tabla del 8 - Tabla del 9 - Tabla del 10"<<endl;
    cout<<"Ingrese que tabla quiere que se muestre: "<<endl; cin>>tabla;

    if((tabla>10) || (tabla<0)){
        cout<<"ERROR: "<<tabla<<" No es una opcion valida"<<endl;
    }
    else{
        cout<<"¿Hasta que numero quiere que se imprima?"<<endl;
        cin>>limite;      
    }

    cout<<"En breve..."<<endl;  

    for(int i = 1; i<=limite;i++){
        cout<<tabla<<" * "<<i<<" = "<<tabla*i<<endl;
    }

    cout<<"Quiere regresar al menu? SI(S) or NO(N)"<<endl;
    cin>>opc;

    if(opc == 'S'){
        return main();
    }
    else{
        return 0;
    }

    return 0;
}