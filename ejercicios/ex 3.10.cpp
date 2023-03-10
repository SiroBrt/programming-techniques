#include <iostream>
#include <string>
using namespace std;
int tamano,minMax[2],aux;

string extremos(int a[]){
    minMax[0]=a[0];
    minMax[1]=a[0];
    for(int i=1;i<sizeof(a);i++){
        if(a[i]<minMax[0]){
            minMax[0]=a[i];
        }
        if(a[i]>minMax[1]){
            minMax[1]=a[i];
        }
    }
    string b;
    aux=minMax[0];
    cout <<aux;
    b.push_back(aux);
    aux=minMax[1];
    cout <<aux;
    b.push_back(aux);
    cout <<b;
    return b;
}

int main(){
    tamano=8;
    int a[tamano]={1,2,3,4,5,6,7,8};
    auto texto=extremos(a);
    cout <<"min at" <<texto;
}