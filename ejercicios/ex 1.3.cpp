#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Introduce a number: ";
    cin >> num;
    if (num%2==1){
        cout << "It's odd" <<endl;
    }
    else if (num%3==0) {
        cout << "it's even and divisible by three";
    }
    else {
            cout << "it's even";
    }
}