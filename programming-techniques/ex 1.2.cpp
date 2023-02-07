#include <iostream>
using namespace std;
int main (){
    int num1,num2;
    cout << "introduce a number: ";
    cin >> num1;
    cout << "introduce another number: ";
    cin >> num2;
    if (num1%num2==0){
        cout << "The first is divisible by the second";
    }
}