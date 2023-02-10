#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
/*By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
What is the 10 001st prime number?*/

int count,indice,num,isPrime;
vector <int> primes={2};

int main(){
    indice=10001;
    count=1;
    num=1;
    while(count<=indice-1){
        num++;
        isPrime=1;
        for(int i=0;i<primes.size();i++){
            if(num%primes[i]==0){
                isPrime=0;
                break;
            }
        }
        if(isPrime==1){
            count++;
            primes.push_back(num);
        }
    }
    cout <<primes[primes.size()-1];
}