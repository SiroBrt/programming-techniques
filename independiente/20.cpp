/*n! means n × (n − 1) × ... × 3 × 2 × 1
For example, 10! = 10 × 9 × ... × 3 × 2 × 1 = 3628800, and the sum of the digits in the number 10! is 3 + 6 + 2 + 8 + 8 + 0 + 0 = 27.
Find the sum of the digits in the number 100!*/
#include <iostream>
#include <cmath>
using namespace std;
int goal=100,aux,sum=0,chunkSize=6;

int sumarDigitos(int input){
    int output=input;
    for(int i=1;i<chunkSize;i++){
        output=output-floor(input/pow(10,i))*9;
    }
    return output;
}

int main(){
    int estimatedChunks;
    estimatedChunks=2*goal/chunkSize+1;
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
                digits[j]=aux-pow(10,chunkSize)*floor(aux/pow(10,chunkSize));
                digits[j]=aux;
            }
        }
    }
    cout <<goal <<"!=";
    int printed=0;
    for(int k=estimatedChunks-1;k>=0;k--){
        if(digits[k]!=0){
            cout <<digits[k];
            printed=1;
        }else{
            if(printed==1){
                for(int l=0;l<chunkSize;l++){
                    cout <<"0";
                }
            }
        }
    }
    for(int k=estimatedChunks-1;k>=0;k--){
        sum=sum+sumarDigitos(digits[k]);
    }
    cout <<endl <<"Sum of the digits=" <<sum;
}