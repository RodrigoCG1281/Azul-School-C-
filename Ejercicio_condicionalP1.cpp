//Muestre el listado de los planetas (con sus números asociados).

#include <iostream>

using namespace std;

int main(){

    int opc;

    cout<<"Ingrese un numero de acuerdo al planeta escogido"<<endl;
    cout<<"1. Mercurio"<<endl<<"2. Venus"<<endl<<"3. Tierra"<<endl<<"4. Martes"<<endl;
    cout<<"5. Jupiter"<<endl<<"6. Saturno"<<endl<<"7. Urano"<<endl<<"8. Neptuno"<<endl;
    cout<<endl;
    cin>>opc;

    if(opc == 1){ //Mercurio
        cout<<"La distancia media es de 59";
    }
    else if(opc == 2){ //Venus
        cout<<"La distancia media es de 108";
    }
    else if(opc == 3){ //Tierra
        cout<<"La distancia media es de 150";
    }
    else if(opc == 4){ //Marte
        cout<<"La distancia media es de 228";
    }
    else if(opc == 5){ //Jupiter
        cout<<"La distancia media es de 750";
    }
    else if(opc == 6){ //Saturno
        cout<<"La distancia media es de 1431";
    }
    else if(opc == 7){ //Urano
        cout<<"La distancia media es de 2877";
    }
    else if(opc == 8){ //Neptuno
        cout<<"La distancia media es de 4509";
    }
    else{
        cout<<"ERROR: "<<opc<<" no esta asociado a ningun planeta.";
    }   
    return 0;
}