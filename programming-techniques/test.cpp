#include <iostream>
#include <string>
using namespace std;

int main(){
    string str="1234567890";
    int num;
    for(int i=0;i<10;i++){
        num=stoi(str.substr(i,2));
        cout <<num <<endl;
    }
}