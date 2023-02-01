#include <iostream>
using namespace std;
int main (){
    int num[2],min;
    cin >>min;
    for (int i=0; i<=1; i++){
        cin >>num[i];
        if(num[i]<min){
            min=num[i];
        }
    }
    cout <<"the minimum is " <<min;
}