#include <iostream>
#include <cmath>
using namespace std;

string toBinary(int n){
    string r;
    while(n!=0){
        r=(n%2==0 ?"0":"1")+r;
        n/=2;
    }
    cout <<"r.length=" <<r.length() <<" r=" <<r <<endl;
    return r;
}

int main(){
    int num;
    num=0;
    auto binary=toBinary(num);

}
//11111111111111