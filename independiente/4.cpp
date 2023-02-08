#include <iostream>
#include <cmath>
using namespace std;
/*A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers.*/

int num,biggest,palindrome;

int checkPalindrome(int candidate){
    if ((floor(candidate/100000)==candidate-floor(candidate/10)*10)&&(floor(candidate/10000)-floor(candidate/100000)*10==floor(candidate/10)-floor(candidate/100)*10)&&(floor(candidate/1000)-floor(candidate/10000)*10==floor(candidate/100)-floor(candidate/1000)*10)){
        return 1;
    }else{
        return 0;
    }
}

int main (){
    for(int i=317; i<1000; i++){
        for(int j=i; j<1000; j++){
            num=i*j;
            palindrome=checkPalindrome(num);
            if ((palindrome==1) && (num>biggest)){
                biggest=num;
            }
        }
    }
    cout <<biggest;
}