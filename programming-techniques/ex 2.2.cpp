#include <iostream>
using namespace std;
int tamano=5;
int main(){
    int num,tamanoReal=0,v[tamano];
    for (int i=tamano-1;i>=0;i--){
        cin >>num;
        if (num==0){
            break;
        }else{
            v[i]=num;
            tamanoReal=tamanoReal+1;

        }
    }
    cout <<"printing \r";
    for(int j=tamano-tamanoReal;j<=tamano-1;j++){
        cout <<v[j] <<" ";
    }
}
