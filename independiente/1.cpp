#include <iostream>
#include <cmath>
using namespace std;
/*
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.
*/
int main(){
    int max,div3,div5,div15;
    cout <<"Introduce the upper bound: ";
    cin >>max;
    div3=3*floor((max-1)/3)*(floor((max-1)/3)+1)/2;
    div5=5*floor((max-1)/5)*(floor((max-1)/5)+1)/2;
    div15=15*floor((max-1)/15)*(floor((max-1)/15)+1)/2;
    cout <<div3+div5-div15;
}