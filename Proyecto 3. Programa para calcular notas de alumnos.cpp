/*Crea un programa en C++ para guardar las notas de N alumnos, N tiene que ser mayor o igual que 20 o menor o 
igual que 30, esto se debe de verificar en el programa, y en caso de que el numero de alumnos este fuera del 
rango se debe de mostrar la opción de ingresar de nuevo el numero de alumnos.Una vez que tengamos los notas 
guardadas dentro de un arreglo, hay que sumar todas las calificaciones, mostrar el promedio del salón, mostrar 
el alumno con nota mas alta, mostrar alumnos con nota promedio (rango de promedio – 1 a promedio + 1) y el 
alumno con menor nota. A los alumnos que tiene una nota menor o igual a 6 se les encargo un trabajo, este 
trabajo suma un punto mas a su nota. Se debe de utilizar el arreglo con las notas originales para generar 
otro arreglo con las notas modificadas de estos alumnos. Imprimir las dos notas en columnas diferentes.
Al final se debe de mostrar la opción para volver a calcular mas notas de alumnos, o finalizar el programa.
*/

#include <iostream> 

using namespace std;

int main(){
    int n ,suma = 0;
   //N mayor mayor igual a 20 o menor igual que 30
    int notas[100], nuevas_notas[100];
    cout<<"Ingrese el numero de alumno(20<=n<=30): "; cin>>n;

    if((n>=20) && (n<=30)){
        for(int i = 0;i<n;i++){
            cout<<"Ingrese la nota del alumno "<<i+1<<": "; cin>>notas[i];
            suma += notas[i];
         }
         int mayor_nota=notas[0],indice_mayor = 0, menor_nota=notas[0],indice_menor = 0,promedio = suma/n;
    

        for(int i = 0;i<n;i++){
            if(mayor_nota<=notas[i]){
                mayor_nota = notas[i];
                indice_mayor = i;
            }
        }

        for(int i = 0;i<n;i++){
            if(notas[i]<=menor_nota){
                menor_nota = notas[i]; 
                indice_menor = i; 

            }
        }
        

        for(int i = 0;i<n;i++){
            if(promedio == notas[i]){
                cout<<"El alumno "<<i<<": Tiene nota promedio"<<endl;
            }
        }
        for(int i = 0;i<n;i++){
            if(notas[i] <= 10){
                nuevas_notas[i] = notas[i] + 1;
            }
        }

         //Mostrando notas

         for(int i = 0;i<n;i++){
            cout<<"La nota del alumno "<<i<<" es: "<<notas[i]<<endl;;
         }
         //mostrando notas modificadas
         for(int i = 0;i<n;i++){
            cout<<"La nueva nota del alumno "<<i<<" es: "<<nuevas_notas[i]<<endl;;
         }



         cout<<"El promedio de los alumnos es: "<<promedio<<endl;
         cout<<"La mayor nota es del alumno "<<indice_mayor + 1<<": "<<mayor_nota<<endl;
         cout<<"La menor nota es del alumno "<<indice_menor + 1<<": "<<menor_nota<<endl;
    }

    else{
        return main();
    }

    return 0;
}