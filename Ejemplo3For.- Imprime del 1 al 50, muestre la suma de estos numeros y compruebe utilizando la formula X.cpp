//Hacer un programa en c++ que imprima del 1 al 50, muestre la suma y compruebe

#include <iostream>
using namespace std;

int main(){
    
    int suma = 0;

    for(int i = 1; i<=50; i++){
        cout<<i<<" ";
        suma = suma + i;
    }
    cout<<endl;
    cout<<"La suma usando el bucle es: "<<suma<<endl;
    cout<<"La suma usando la formula es: "<<((50*51)/2)<<endl;


    return 0;
}