/*Existe un arreglo con las calificaciones de un salon
de clases, pero se dea agregarle %10 + de calificacion
a todos los alumnos ya que entregaron un trabajo extra,
la nueva calificacion se desea guardar en un arreglo 
nuevo.*/
#include <iostream>

using namespace std;

int main(){

    int n;
    float notas[n];
    float nuevas_notas[n];

    cout<<"Ingrese el numero de notas: "; cin>>n;

    for(int i = 0;i<n;i++){
        cout<<"Ingrese la nota "<<i+1<<": "; cin>>notas[i];
        //Sumando el 10%

        nuevas_notas[i] = notas[i] + notas[i]/10;
    }
    

    for(int i = 0;i<n;i++){
        cout<<nuevas_notas[i]<<endl;
    }


    return 0;
}