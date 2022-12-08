//5.- Que muestre los números impares que haya del 1 al 100.
#include <iostream>

using namespace std;

int main(){

    for(int i = 1; i<=100; i++){
        if(i % 2 == 1 ){
            cout<<i<<" ";
        }

    }


    return 0;
}
