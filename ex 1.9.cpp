#include <iostream>
using namespace std;
int main (){
    int num[2],min,max,mid;
    cin >>mid;
    max=mid;
    min=mid;
    for (int i=0; i<=1; i++){
        cin >>num[i];
        if (num[i]>max){
            max=num[i];
        }else if(num[i]<min){
            min=num[i];
        }else{
            mid=num[i];
        }
    }
    cout <<max <<" " <<mid <<" " <<min;
}
