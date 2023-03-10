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
        for(int i=coeficient.size()-1;i<=limite;i++){
            coeficient.push_back(0);
        }
        for(int i=a.coeficient.size()-1;i<=limite;i++){
            a.coeficient.push_back(0);
        }
        output.coeficient[0]=coeficient[0]+a.coeficient[0];
        for(int i=1;i<=limite+1;i++){
            output.coeficient.push_back(coeficient[i]+a.coeficient[i]);
            output.degree=i;
        }
        return output;
    }
    static void printPolynomial(Polynomial input){
        bool started=0;
        cout <<"P(x)=";
        if(input.getCoef(0)!=0){
            cout <<input.getCoef(0);
            started=1;
        }
        if(input.getCoef(1)!=0){
            if(started==1 && input.getCoef(1)>0){
                cout <<"+";
            }
            if(input.getCoef(1)!=1){
                cout <<input.getCoef(1);
            }
            cout <<"x";
            started=1;
        }
        //hay que mejorar los if para que no ponga x^1,que deje negativos...
        for(int i=2;i<=input.degree;i++){
            if(input.getCoef(i)==1){
                if(started==1){
                    cout <<"+";
                }
                cout <<"x^" <<i;
                started=1;
            }else if(input.getCoef(i)==-1){ 
                cout <<"-x^" <<i;
                started=1;
            }else if(input.getCoef(i)!=0){
                if(started==1  && input.getCoef(i)>0){
                    cout <<"+";
                }
                cout <<input.getCoef(i) <<"x^" <<i;
                started=1;
            }
        }
        if(started==0){
            cout <<"0";
        }
    }

};

int main(){
    Polynomial a,b;
    for(int i=0;i<=3;i++){
        a.setCoef(i,1);
        b.setCoef(2*i,-1);
    }
    Polynomial::printPolynomial(b);
    cout <<endl <<"P(2)=" <<b.evaluate(-1);
}