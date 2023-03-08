#include <iostream>
#include <cmath>
using namespace std;

class Polynomial{
    private:
    int degree;
    int coeficient[];
    public:
    Polynomial(){
        degree=0;
        coeficient[0]=0;
    }
    int getDegree(){
        return degree;
    }
    int getCoef(int n){
        return coeficient[n];
    }
    void setCoef(int n,int value){
        coeficient[n]=value;
        if(n>degree){
            degree=n;
        }
    }
    int evaluate(int x){
        int total=0;
        for(int i=0;i<=degree;i++){
            total+=coeficient[i]*pow(x,i);
        }
    }
    Polynomial operator+(Polynomial a){
        int limite=max(degree,a.degree);
        for(int i=0;i<=limite;i++){
            coeficient[i]=coeficient[i]+a.coeficient[i];
        }
        return coeficient;
    }

};

int main(){
    Polynomial a;
    a.setCoef(0,1);
    a.setCoef(1,2);
    a.setCoef(2,1);
    cout <<a.getDegree();
}