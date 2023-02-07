#include <iostream>
#include <cmath>
using namespace std;
/*The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?*/

double bignum=600851475143,num,factor;

int main(){
    num=bignum;
    for(double i=2; i<=sqrt(bignum);i++){
        while (num%i==0){
            num=num/i;
            factor=i;
            cout <<factor;
        }
    }
    cout <<factor;
}
