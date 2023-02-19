/*The sum of the squares of the first ten natural numbers is 385
The square of the sum of the first ten natural numbers is 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 2640
Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.*/
#include <iostream>
#include <cmath>
using namespace std;
int n=100,sqsum,sumsq;

int main(){
    sqsum=pow(n*(n+1)/2,2);
    sumsq=(n*(n+1)*(2*n+1))/6;
    cout <<sqsum-sumsq;

}