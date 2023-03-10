#include <iostream>
using namespace std;
int main (){
    int num[3],correct=1;
    for (int i=0; i<=2; i++){
        cout <<"digit: ";
        cin >>num[i];
        if (num[i]!=i+1){
            correct=0;
        }
    }
    if (correct==1){
        cout <<"Access granted";
    }
}