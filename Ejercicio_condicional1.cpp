#include <iostream>

using namespace std;

int main(){
    int ahorro_mensual = 0, ingreso_mensual = 0, gastos_mensuales = 0, gastos_casa = 0, gastos_comida = 0, gastos_coche = 0, gastos_gasolina = 0, gastos_seguro = 0, gastos_ropa = 0;

    cout<<"Ingrese su ingreso mensual: "<<endl; cin>>ingreso_mensual;
    cout<<"Ingrese el gasto de la casa: "<<endl; cin>>gastos_casa;
    cout<<"Ingrese el gasto de la comida: "<<endl; cin>>gastos_comida;
    cout<<"Ingrese el gasto de la coche: "<<endl; cin>>gastos_coche;
    cout<<"Ingrese el gasto de la gasolina: "<<endl; cin>>gastos_gasolina;
    cout<<"Ingrese el gasto de la seguro: "<<endl; cin>>gastos_seguro;
    cout<<"Ingrese el gasto de la ropa: "<<endl; cin>>gastos_ropa;

    gastos_mensuales = gastos_casa + gastos_coche + gastos_gasolina + gastos_comida + gastos_mensuales + gastos_ropa + gastos_seguro;
    cout<<"El ingreso mensual es: "<<ingreso_mensual<<endl;
    cout<<"El gasto mensual es: "<<gastos_mensuales<<endl;

    ahorro_mensual = ingreso_mensual - gastos_mensuales;
    cout<<"El ahorro mensual es: "<<ahorro_mensual<<endl;

    if(ahorro_mensual >= 300){
        cout<<"Puede ahorrar 200 pesos este mes";
    }

    else {
        cout<<"No podra ahorrar 200 pesos este mes";
    }


    return 0;
}