//Muestre el listado de los posibles colores 
//en los que puede estar un semáforo, con sus números asociados.
#include <iostream>

using namespace std;

int main(){

    int color;

    cout<<"1. ROJO"<<endl<<"2. VERDE"<<endl<<"3. AMARILLO"<<endl;
    cout<<"Ingrese un color: "; cin>> color;

    if(color == 1){
        cout<<"No pasar";
    }
    else if(color == 2){
        cout<<"Puede pasar";
    }
    else{
        cout<<"Precaucion";
    }

    return 0;
}