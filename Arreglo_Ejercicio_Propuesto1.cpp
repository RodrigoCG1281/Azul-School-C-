/*1.- Crea un programa en C++ donde el usuario ingrese 10 números, después todos 
estos se deben de almacenar en un array para finalmente mostrar en pantalla la suma, 
resta, multiplicación y división de todos los elementos.*/

#include <iostream> 
using namespace std;

int main(){

    int n[10];

    int e1,e2,opc;

    for(int i = 0; i<10;i++){
        cout<<"Ingrese el numero del indice "<<i<<": "; cin>>n[i];
    }

    //Mostrando los numeros
    for(int i = 0; i<10;i++){
        cout<<"N["<<i<<"] = "<<n[i]<<" ";
    }

    cout<<"\nIngrese el numero a escoger: "; cin>>e1;
    cout<<"Ingrese el otro numero a escoger: "; cin>>e2;

    cout<<"SELECCIONE UNA OPCION"<<endl;
    cout<<"\nOpcion 1. '+' ";
    cout<<"\nOpcion 2. '-' ";
    cout<<"\nOpcion 3. '*' ";
    cout<<"\nOpcion 4. '/' \n";

    cin>>opc;

    switch (opc)
    {
    case 1:
        cout<<"El resultado es: "<<e1+e2;
        break;
    case 2:
        cout<<"El resultado es: "<<e1-e2;
        break;
    case 3:
        cout<<"El resultado es : "<<e1*e2;
        break;
    case 4:
        cout<<"El resultado es: "<<e1/e2;
        break;
    default:
        cout<<"ERROR: OPCION NO VALIDA";
        break;
    }







    return 0;
}