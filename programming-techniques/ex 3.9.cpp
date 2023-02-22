#include <iostream>
using namespace std;
int tamano,maximo,minimo;

int largest(int a[]){
    maximo=a[0];
    for(int i=1;i<sizeof(a);i++){
        if(a[i]>maximo){
            maximo=a[i];
        }
    }
    return maximo;
}

int smallest(int a[]){
    minimo=a[0];
    for(int i=1;i<sizeof(a);i++){
        if(a[i]<minimo){
            minimo=a[i];
        }
    }
    return minimo;
}

int main(){
    tamano=8;
    int a[tamano]={1,2,3,4,5,6,7,8};
    cout <<"maximum=" <<largest(a) <<" minimum=" <<smallest(a);
}