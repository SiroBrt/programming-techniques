#include <iostream>
using namespace std;
int main (){
    float price=10,age,total;
    cout <<"Introduce your age: ";
    cin >> age;
    if (age<5){
        total=price*40/100;
    }else if(age>60){
        total=price*45/100;
    }else{
        total=price;
    }
    cout <<"The total is " <<total;
}