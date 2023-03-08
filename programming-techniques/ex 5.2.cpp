#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

class Polynomial{
    private:
    int degree;
    vector <int> coeficient;
    public:
    Polynomial(){
        degree=0;
        coeficient.push_back(0);
    }
    int getDegree(){
        return degree;
    }
    int getCoef(int n){
        return coeficient[n];
    }
    void setCoef(int n,int value){
        //completar
        for(int i=coeficient.size()-1;i<=n;i++){
            coeficient.push_back(0);
        }
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
        return total;
    }
    Polynomial operator+(Polynomial a){
        Polynomial output;
        int limite=max(degree,a.degree);
        for(int i=0;i<=limite;i++){
            output.coeficient.push_back(coeficient[i]+a.coeficient[i]);
            output.degree=i;
        }
        return output;
    }
    static void printPolynomial(Polynomial input){
        cout <<"P(x)=";
        if(input.getCoef(0)!=0){
            cout <<input.getCoef(0);
        }
        //hay que mejorar los if para que no ponga x^1,que deje negativos...
        for(int i=1;i<=input.degree;i++){
            if(input.getCoef(i)!=0 && input.getCoef(i)!=1){
                cout <<"+" <<input.getCoef(i) <<"x^" <<i;
            }else if(input.getCoef(i)==1){
                cout <<"+x^" <<i;
            }
        }
    }

};

int main(){
    Polynomial a;
    for(int i=0;i<=3;i++){
        a.setCoef(i,i+1);
    }
    cout <<a.getDegree() <<" ";
    Polynomial::printPolynomial(a);
}