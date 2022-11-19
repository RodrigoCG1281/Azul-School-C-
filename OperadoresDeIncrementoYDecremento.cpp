#include <iostream>

using namespace std;

int main(){
    int x = 0, y = 0;

    x = 5;
    y = x++;   // y = x luego y = x + 1     y = x , x =  x + 1 
    cout<<"Valor de Y: "<<y<<" Valor de X: "<<x<<endl;

    x = 5;
    y = ++x; // y = x + 1 luego y = x  x = x + 1, y = x 
    cout<<"Valor de Y. "<<y<<" Valor de X "<<x<<endl;
    return 0;
}