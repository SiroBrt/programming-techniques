#include <iostream>
using namespace std;
int main (){
    int num[2];
    for (int i=0; i<=1; i++){
        cout << "introduce a number: ";
        cin >> num[i];
    }
    if (num[0]>num[1]){
        cout << "The first is bigger";
    }else if(num[1]>num[0]){
        cout <<"The second one is bigger";
    }else{
        cout <<"They are equal";
    }
}