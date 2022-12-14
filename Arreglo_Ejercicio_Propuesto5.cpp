/*5.- Crea un programa en C++ donde el usuario ingrese el sueldo diario de 10 empleados, después calcular cuanto
se le paga a cada uno por semana, mes y año, determinar cual es el empleado con mayor sueldo, y determinar cual 
es el empleado con menor sueldo. Al final imprimir todos los resultados en pantalla.*/
#include<iostream>
using namespace std;

int main(){

    int sueldos_diario[10];

    for(int i = 0;i<=9;i++){
        cout<<"Ingrese su sueldo: "; cin>>sueldos_diario[i];
    }
    int mayor_sueldo = sueldos_diario[0], menor_sueldo = sueldos_diario[0],indice_mayor = 0, indice_menor = 0;

    for(int i = 0;i<=9;i++){
        cout<<"El sueldo diario del trabajador "<<i+1<<" es: "<<sueldos_diario[i]<<endl;
        cout<<"El sueldo semanal del trabajador "<<i+1<<" es: "<<sueldos_diario[i]*7<<endl;
        cout<<"El sueldo mensual del trabajador "<<i+1<<" es: "<<sueldos_diario[i]*30<<endl;
        cout<<"El sueldo anual del trabajador "<<i+1<<" es: "<<sueldos_diario[i]*365<<endl;
        cout<<"----------------------------------------"<<endl;

        if(sueldos_diario[i] > mayor_sueldo){
            mayor_sueldo = sueldos_diario[i];
            indice_mayor = i;
        }
    }

    for(int i = 0;i<=9;i++){
        if(sueldos_diario[i] < menor_sueldo){
            menor_sueldo = sueldos_diario[i];
            indice_menor = i;
        }
    }

    //determinar cual es el empleado con mayor y menor sueldo para luego mostrarlas en pantalla
    cout<<"El mayor sueldo es del empleado "<<indice_mayor + 1<<" de un monto de: "<<mayor_sueldo<<endl;
    cout<<"El menor sueldo es del empleado "<<indice_menor + 1<<" de un monto de: "<<menor_sueldo;

    return 0;
}