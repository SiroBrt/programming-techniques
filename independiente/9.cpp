
#include <iostream>
#include <cmath>
using namespace std;
int a,b,num;
float c;
int main(){
    for(a=500;a>=3;a--){
        for(b=a;b>3;b--){
            c=sqrt(pow(a,2)+pow(b,2));
            if(a+b+c==1000){
                num=a*b*c;
                cout <<num;
            }
        }
    }
}