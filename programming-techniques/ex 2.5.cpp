#include <iostream>
using namespace std;
int N=3,M=4;

int main(){
    int num,matriz[N][M];
    for(int i=0;i<N;i++){
        for (int j=0;j<M;j++){
            cout <<"column " <<i+1 <<" row " <<j+1 <<": ";
            cin >>num;
            matriz[i][j]=num;
        }
    }
    for(int k=0;k<M;k++){
        for (int l=0;l<N-1;l++){
            cout <<matriz[l][k] <<"|";
        }
        cout <<matriz[N-1][k] <<endl;
    }   
}