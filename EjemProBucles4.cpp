//4.- Que muestre los números pares que haya del 1 al 100.

#include<iostream>

using namespace std;

int main(){

    for(int i = 1; i<=100;i++){
        if(i % 2 == 0){
            cout<<i<<" ";
        }
    }


    return 0;
}