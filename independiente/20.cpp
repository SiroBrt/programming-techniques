/*n! means n × (n − 1) × ... × 3 × 2 × 1
For example, 10! = 10 × 9 × ... × 3 × 2 × 1 = 3628800, and the sum of the digits in the number 10! is 3 + 6 + 2 + 8 + 8 + 0 + 0 = 27.
Find the sum of the digits in the number 100!*/
#include <iostream>
#include <cmath>
using namespace std;
int goal=20,aux,sum=0,chunkSize=8;

int sumarDigitos(int input){
    int output=input;
    for(int i=1;i<chunkSize;i++){
        output=output-floor(input/pow(10,i))*9;
    }
    return output;
}

int main(){
    int estimatedChunks;
    estimatedChunks=            /*poner una aproximacion para las cifras del factorial*/    /chunkSize+1;
    long int digits[estimatedChunks];
    digits[0]=1;
    for(int i=1;i<estimatedChunks;i++){
        digits[i]=0;
    }
    for(int i=1;i<=goal;i++){
        for(int j=floor(estimatedChunks)-1;j>=0;j--){
            aux=digits[j];
            aux=aux*i;
            if(aux>=pow(10,chunkSize)){
                digits[j+1]=digits[j+1]+floor(aux/pow(10,chunkSize));
                digits[j]=aux-pow(10,chunkSize);
            }else{
                digits[j]=aux;
            }
        }
    }
    cout <<goal <<"!=";
    for(int k=estimatedChunks-1;k>=0;k--){
        cout <<digits[k] <<" ";
    }
    for(int k=estimatedChunks-1;k>=0;k--){
        sum=sum+sumarDigitos(digits[k]);
    }
    cout <<endl <<"Sum of the digits=" <<sum;
}