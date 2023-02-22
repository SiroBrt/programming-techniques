#include <iostream>
using namespace std;
int num1,num2,aux;

void swap(int &num1,int &num2){
    aux=num1;
    num1=num2;
    num2=aux;
}

int main(){
    cout <<"Introduce the first: ";
    cin >>num1;
    cout <<"Introduce the second: ";
    cin >>num2;
    swap(num1,num2);    
    cout <<"num1=" <<num1 <<" num2=" <<num2;
}