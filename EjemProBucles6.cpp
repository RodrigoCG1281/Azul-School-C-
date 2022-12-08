//6.- Ingresar el ultimo término de la serie mostrado a 
//continuación: 2, 4, 6, 8,10,….., n; mostrar la suma total de la 
//serie completa en la pantalla.
// Ingreso el valor de n y luego lo tengo que sumar todos los valores

#include <iostream>
using namespace std;

int main(){
    
    int n,i=2,suma=0;
    cout<<"Ingrese el valor de n: "; cin>>n;
    do{
        if(i % 2 == 0){
            suma = suma + i;
            cout<<suma<<endl;
        }
        i++;

    }while(i <= n);

    cout<<"La suma es: "<<suma;

    return 0;
}