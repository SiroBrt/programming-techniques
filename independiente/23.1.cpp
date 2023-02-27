/*A perfect number is a number for which the sum of its proper divisors is exactly equal to the number. For example, the sum of the proper divisors of 28 would be 1 + 2 + 4 + 7 + 14 = 28, which means that 28 is a perfect number.
A number n is called deficient if the sum of its proper divisors is less than n and it is called abundant if this sum exceeds n.
As 12 is the smallest abundant number, 1 + 2 + 3 + 4 + 6 = 16, the smallest number that can be written as the sum of two abundant numbers is 24.
By mathematical analysis, it can be shown that all integers greater than 28123 can be written as the sum of two abundant numbers. However, this upper limit cannot be reduced any further by analysis even though it is known that the greatest number that cannot be expressed as the sum of two abundant numbers is less than this limit.
Find the sum of all the positive integers which cannot be written as the sum of two abundant numbers.*/
#include <iostream>
#include <map>
#include <list>
using namespace std;
map <int,int> numeros;
int limit=28123,sum=0,found;
list <int> elegidos;

int sumaDivisores(int input){
    int output=0;
    for(int i=1;i<=input/2;i++){
        if(input%i==0){
            output+=i;
        }
    }
    return output;
}

int main(){
    for(int i=1;i<=limit;i++){
        numeros[i]=sumaDivisores(i);
        if(numeros[i]>i){
            elegidos.push_front(i);
        }
    }
    for(int i=1;i<=limit;i++){
        found=0;
        for(int j:elegidos){
            for(int k:elegidos){
                if(j+k==i){
                    found=1;
                    break;
                }
            }
            if(found==1){
                break;
            }
        }
        if(found==0){
            sum+=i;
            cout <<i <<" 0" <<endl;
        }else{
            cout <<i <<" 1" <<endl;
        }
    }
    cout <<"total=" <<sum;
}