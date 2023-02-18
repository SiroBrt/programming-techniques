#include <iostream>
using namespace std;
int rows=4,columns=3,columnSum,maximo,num;
int main(){
    for(int i=1;i<=columns;i++){
        columnSum=0;
        for (int j=1;j<=rows;j++){
            cout <<"column " <<i <<" row " <<j <<": ";
            cin >>num;
            columnSum=columnSum+num;
        }
        if (columnSum>maximo){
            maximo=columnSum;
        }
    }
    cout <<maximo;
}
