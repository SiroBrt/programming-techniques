#include <iostream>
#include <cmath>
using namespace std;
int exponent,base,aux,chunkSize=6,estimatedChunks;

int main(){
    cout <<"Introduce the base: ";
    cin >>base;
    cout <<"Introduce the exponent: ";
    cin >>exponent;
    estimatedChunks=floor(log10(pow(base,exponent)))/chunkSize+1;
    long int digits[estimatedChunks];
    digits[0]=1;
    for(int i=1;i<estimatedChunks;i++){
        digits[i]=0;
    }
    for(int i=1;i<=exponent;i++){
        for(int j=floor(estimatedChunks)-1;j>=0;j--){
            aux=digits[j];
            aux=aux*base;
            if(aux>=pow(10,chunkSize)){
                digits[j+1]=digits[j+1]+floor(aux/pow(10,chunkSize));
                digits[j]=aux-pow(10,chunkSize)*floor(aux/pow(10,chunkSize));        //arreglar para cuando la llevada es de mas de 1
            }else{
                digits[j]=aux;
            }
        }
    }
    cout <<base <<"^" <<exponent <<"=";
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