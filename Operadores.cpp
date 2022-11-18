/*
Podemos usar variables operaciones como por ejemplo:
suma    a + b 
resta   a - b 
multiplicacion a * b
divison a / b 
modulo  a % b 

+=   num += 20 --> num = num + 20
-=   num -= 30 --> num = num - 30
*=   num *= 5  --> num = num * 5
%=   num %= 30 --> num = num % 30
*/

#include <iostream>

int main(){

     short int a = 5;
     short int b = 10;
     short int c = 20;



    std::cout<<a + b<<std::endl;
    std::cout<<a - b<<std::endl;
    std::cout<<a * b<<std::endl;
    std::cout<<a / b<<std::endl;
    std::cout<<a % b<<std::endl;
    std::cout<<a * c<<std::endl;

    return 0;
}