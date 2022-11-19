/*Escriba un programa que lea tres valores enteros que represente el mes, el día y el año con cuatro dígitos. 
El programa deberá mostrar la fecha en uno de los formatos siguientes, dependiendo de la selección del usuario. 
Si el usuario introduce 1, se mostrara el mes con palabra (“Enero”), el día como un entero (11) y el año (1999).
Si se introduce un 2, se mostrara el mes con una abreviatura de tres letras (“Ene”), el día como un entero (11)
y el año (1999).Si se produce un 3, se mostrara el mes como un entero (01),el día como un entero (11) y el año 
(1999). Solo usar lo expuesto en temas vistos previamente.

Nota: En la imagen mostrada anteriormente se muestra como el usuario 
introduce los datos en una sola linea separados por espacios (07 09 2017). 
Se puede recoger estos tres valores con un mismo cin 
(cin>>variable1>>variblae2>>variable3).*/

#include <iostream>

using namespace std;

int main(){

    int dia,mes,anio,opc;
    
    cout<<"Traductor de Fecha"<<endl;
    cout<<"Ingrese el dia/mes/anio"<<endl; cin>>dia>>mes>>anio;

    cout<<"Ingrese una de las siguientes opciones: "<<endl;
    cout<<"1. Se mostrara el mes con palabra (Enero), el día como un entero (11) y el anio (1999)"<<endl;
    cout<<"2. Se mostrara el mes con una abreviatura de tres letras (Ene), el dia como un entero (11) y el anio (1999)"<<endl;
    cout<<"3. se mostrara el mes como un entero (01),el dia como un entero (11) y el anio (1999)"<<endl;
    cin>>opc;

    switch (opc)
    {
    case 1:
        switch (mes)
        {
        case 1:
            cout<<"Enero"<<" "<<dia<<" "<<anio;
            break;
        case 2:
            cout<<"Febrero"<<" "<<dia<<" "<<anio;
            break;
        case 3:
            cout<<"Marzo"<<" "<<dia<<" "<<anio;
            break;
        case 4:
            cout<<"Abril"<<" "<<dia<<" "<<anio;
            break;
        case 5:
            cout<<"Mayo"<<" "<<dia<<" "<<anio;
            break;
        case 6:
            cout<<"Junio"<<" "<<dia<<" "<<anio;
            break;
        case 7:
            cout<<"Julio"<<" "<<dia<<" "<<anio;
            break;
        case 8:
            cout<<"Agosto"<<" "<<dia<<" "<<anio;
            break;
        case 9:
            cout<<"Setiembre"<<" "<<dia<<" "<<anio;
            break;
        case 10:
            cout<<"Octubre"<<" "<<dia<<" "<<anio;
            break;
        case 11:
            cout<<"Noviembre"<<" "<<dia<<" "<<anio;
            break;
        case 12:
            cout<<"Diciembre"<<" "<<dia<<" "<<anio;
            break;        
        
        default:
            break;
            cout<<"Naciste en marte webonaso";
        }
        break;
    case 2:
    switch (mes)
        {
        case 1:
            cout<<"Ene"<<" "<<dia<<" "<<anio;
            break;
        case 2:
            cout<<"Febr"<<" "<<dia<<" "<<anio;
            break;
        case 3:
            cout<<"Mzo"<<" "<<dia<<" "<<anio;
            break;
        case 4:
            cout<<"Abr"<<" "<<dia<<" "<<anio;
            break;
        case 5:
            cout<<"May"<<" "<<dia<<" "<<anio;
            break;
        case 6:
            cout<<"Jun"<<" "<<dia<<" "<<anio;
            break;
        case 7:
            cout<<"Jul"<<" "<<dia<<" "<<anio;
            break;
        case 8:
            cout<<"Agt"<<" "<<dia<<" "<<anio;
            break;
        case 9:
            cout<<"Set"<<" "<<dia<<" "<<anio;
            break;
        case 10:
            cout<<"Oct"<<" "<<dia<<" "<<anio;
            break;
        case 11:
            cout<<"Nov"<<" "<<dia<<" "<<anio;
            break;
        case 12:
            cout<<"Dic"<<" "<<dia<<" "<<anio;
            break;        
        
        default:
            break;
            cout<<"Naciste en marte webonaso";
        }
        break; 
    case 3:
    switch (mes)
        {
        case 1:
            cout<<"01"<<" "<<dia<<" "<<anio;
            break;
        case 2:
            cout<<"02"<<" "<<dia<<" "<<anio;
            break;
        case 3:
            cout<<"03"<<" "<<dia<<" "<<anio;
            break;
        case 4:
            cout<<"04"<<" "<<dia<<" "<<anio;
            break;
        case 5:
            cout<<"05"<<" "<<dia<<" "<<anio;
            break;
        case 6:
            cout<<"06"<<" "<<dia<<" "<<anio;
            break;
        case 7:
            cout<<"07"<<" "<<dia<<" "<<anio;
            break;
        case 8:
            cout<<"08"<<" "<<dia<<" "<<anio;
            break;
        case 9:
            cout<<"09"<<" "<<dia<<" "<<anio;
            break;
        case 10:
            cout<<"10"<<" "<<dia<<" "<<anio;
            break;
        case 11:
            cout<<"11"<<" "<<dia<<" "<<anio;
            break;
        case 12:
            cout<<"12"<<" "<<dia<<" "<<anio;
            break;        
        
        default:
            break;
            cout<<"Naciste en marte webonaso";
        }
        break;
    
    default:
        cout<<"ERROR: "<<opc<<" No es una opcion valida";
        break;
    }




    return 0;
}