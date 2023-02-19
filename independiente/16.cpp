/*2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.
What is the sum of the digits of the number 2^1000?*/
#include <iostream>
#include <cmath>
using namespace std;
int exponent=1000,aux,sum=0;

int sumarDigitos(int input){
    int output;
    output=input-floor(input/10)*9-floor(input/100)*9-floor(input/1000)*9-floor(input/10000)*9;
    return output;
}
int main(){
    int estimatedDigits;
    estimatedDigits=floor(log10(pow(2,exponent)))/5+1;
    long int digits[estimatedDigits];
    digits[0]=1;
    for(int i=1;i<estimatedDigits;i++){
        digits[i]=0;
    }
    for(int i=0;i<exponent;i++){
        for(int j=floor(estimatedDigits)-1;j>=0;j--){
            aux=digits[j];
            aux=aux*2;
            if(aux>=100000){
                digits[j+1]++;
                digits[j]=aux-100000;
            }else{
                digits[j]=aux;
            }
        }
    }
    cout <<"2^" <<exponent <<"=";
    for(int k=estimatedDigits-1;k>=0;k--){
        cout <<digits[k];
    }
    for(int k=estimatedDigits-1;k>=0;k--){
        sum=sum+sumarDigitos(digits[k]);
    }
    cout <<endl <<"Sum of the digits=" <<sum;
}