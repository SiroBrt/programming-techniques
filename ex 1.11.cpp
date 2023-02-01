#include <iostream>
using namespace std;
int main(){
    char input;
    cin >>input;
    switch(input){
        case "0":
        case "1":
        case "2":
        case "3":
        case "4":
        case "5":
        case "6":
        case "7":
        case "8":
        case "9":
            cout <<"It's a number";
            break;
        default:
            cout <<"It's not a number";
    }
}