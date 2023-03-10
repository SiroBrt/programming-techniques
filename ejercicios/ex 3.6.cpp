#include <iostream>
#include <cmath>
using namespace std;
int num,aux,chunkSize=6,estimatedChunks;

int main(){
    cout <<"Introduce the number: ";
    cin >>num;
    estimatedChunks=2*num/chunkSize+1;
    long int digits[estimatedChunks];
    digits[0]=1;
    for(int i=1;i<estimatedChunks;i++){
        digits[i]=0;
    }
    for(int i=1;i<=num;i++){
        for(int j=floor(estimatedChunks)-1;j>=0;j--){
            aux=digits[j];
            aux=aux*i;
            if(aux>=pow(10,chunkSize)){
                digits[j+1]=digits[j+1]+floor(aux/pow(10,chunkSize));
                digits[j]=aux-pow(10,chunkSize)*floor(aux/pow(10,chunkSize));
            }else{
                digits[j]=aux;
            }
        }
    }
    cout <<num <<"!=";
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
}