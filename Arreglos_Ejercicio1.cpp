#include <iostream>

using namespace std;

int main(){

    int a[10];
    int n;

    cout<<"Ingrese el numero de elementos del arreglo: "<<endl; cin>>n;

    for(int i = 0;i<n;i++){
        cout<<"Ingrese un elemento: "<<endl;
        cin>>a[i];
    }

    for(int i = 0;i<n;i++){

        cout<<"a["<<i<<"] = "<<a[i]<<" ";
    }


    return 0;
}