#include <iostream>
using namespace std;
int main (){
    float x,total;
    cout << "Introduce a value: ";
    cin >> x;
    if (x<=0){
        total=x+3;
    }else {
        total=x*x+2*x;
    }
    cout <<"y=" <<total;
}