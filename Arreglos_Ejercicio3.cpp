//Arreglo con variable constante y cálculos.

#include<iostream>

using namespace std;

int main(){
    int n = 10;
    int a[n] = {};

    for(int i = 0;i<=9;i++){
        a[i] = (i+1) * 2;
    }

    for(int i = 0;i<=9;i++){
        cout<<a[i]<<endl;
    }

    return 0;
}