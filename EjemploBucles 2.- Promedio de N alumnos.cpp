/*Realizar un programa en C++ que calcule el promedio general de un salón de clases, no se conoce el número
de alumnos, el programa debe de darle la opción al maestro para que él pueda decidir si desea agregar más 
datos de alumnos o ya ha terminado de cargar todos los datos.*/

//promedio_general = suma_de_todas_las_notas/total_de_alumnos

#include <iostream>

using namespace std;

int main(){

    int total_de_alumnos = 0;
    int suma_de_todas_las_notas = 0;
    int promedio_general = 0;
    int nota_alumno = 0;
    char eleccion;
    int i = 1;

    cout<<"Ingrese el numero de estudiantes: "<<endl; 
    cin>>total_de_alumnos;

    while(i <= total_de_alumnos){
       
        cout<<"Ingrese la nota del alumno "<<i<<": "<<endl; 
        cin>>nota_alumno;;
        suma_de_todas_las_notas = suma_de_todas_las_notas + nota_alumno;
        i++;

    }
    cout<<"Desea agregar notas de otro alumno? S/N"<<endl;
    cin>>eleccion;
    
    cout<<total_de_alumnos<<endl;

    while(eleccion != 'N'){
        cout<<"Ingrese la nota de ese alumno: ";
        cin>>nota_alumno;
        suma_de_todas_las_notas = suma_de_todas_las_notas + nota_alumno;
        cout<<"Desea agregar nota de otro alumno=? S/N"<<endl;
        cin>>eleccion;
        total_de_alumnos++;
    }

    promedio_general = suma_de_todas_las_notas/total_de_alumnos;

    cout<<"El promedio general es: "<<promedio_general<<endl;
    cout<<"El total de alumnos es: "<<total_de_alumnos;

    return 0;
}