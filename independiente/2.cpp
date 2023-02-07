#include <iostream>
#include <cmath>
using namespace std;
/*Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:
1, 2, 3, 5, 8, 13, 21, 34, 55, 89...

By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.*/
//1+1+2+3+5+8+13+21+34...=2+2+8+8+34+34...

int num1,num2,aux,bound,suma;

int Fibonacci(int bound){
    num1=1;
    num2=2;
    suma=1+num1;
    while (num2 < bound){
        suma=suma+num2;
        aux=num1;
        num1=num2;
        num2=num2+aux;
    }
    if (aux%2==0){
        suma=suma-num1;
    } else if(num2%2==0){
        suma=suma-aux-num1;
    }
    return suma;
}

int main(){
    cout <<"Introduce the upper bound: ";
    cin >>bound;   
    suma=Fibonacci(bound);
    cout <<suma/2;
}