#include <iostream>
using namespace std;
int main (){
    int num,dec,count;
    cout <<"Introduce a number: ";
    cin >>num;
    if((num/10!=0)&&(num/100==0)){
        dec=num/10;
        if (dec%2==0){
            count=count+1;
        }
        if (num%2==0){
            count=count+1;
        }
        cout <<"The sum is " <<dec+(num-dec*10) <<endl;
        cout <<"There are " <<count <<" even digits";
    }
}