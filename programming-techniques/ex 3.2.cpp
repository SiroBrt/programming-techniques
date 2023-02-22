#include <iostream>
using namespace std;
int num[2];

int largest(int input[]){
    if(input[0]>input[1]){
        return input[0];
    }else{
        return input[1];
    }
}

int main(){
    cout <<"Introduce the first: ";
    cin >>num[0];
    cout <<"Introduce the second: ";
    cin >>num[1];
    cout <<largest(num);    
}