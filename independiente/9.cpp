/*A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
a2 + b2 = c2
For example, 32 + 42 = 9 + 16 = 25 = 52.
There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.*/
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