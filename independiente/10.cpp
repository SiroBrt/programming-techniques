/*The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
Find the sum of all the primes below two million.*/
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
vector <long int> primes={2};
int isPrime;
long int upperBound=2000000;
long long int sum;

int main(){
    for(long int i=3;i<=upperBound;i+=2){
        isPrime=1;
        for(auto j:primes){
            if (j*j > i){
                break;
            }
            if(i%j==0){
                isPrime=0;
                break;
            }
        }
        if(isPrime==1){
            primes.push_back(i);
        }
    }
    sum=0;
    for(auto p:primes){
        sum+=p;
        cout <<sum <<endl;
    }
}