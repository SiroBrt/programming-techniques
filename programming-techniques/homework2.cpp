#include <iostream>
#include <cmath>
using namespace std;

int mcd(int a,int b) {
    if((a==0)||(b==0)){
        return 1;
    }
    if(a<0){
        a=-a;
    }
    if(b<0){
        b=-b;
    }
    while (a != b) {
        if (a > b){
            a = a - b;
        }else{
            b = b - a;
        }
    }
    return a;
}

class Fraction{
private:
    int numerator,denominator;
public:
    //setters
    Fraction(){
        numerator=1;
        denominator=1;
    }
    Fraction(int a,int b){
        int r=mcd(a,b);
        numerator=a/r;
        denominator=b/r;
    }
    //functions
    static void readFraction(Fraction &f){
        int a,b;
        cout <<"Introduce the numerator: ";
        cin >>a;
        cout <<"Introduce the denominator: ";
        cin >>b;
        //simplificar
        int r=mcd(a,b);
        f.numerator=a/r;
        f.denominator=b/r;
    }
    void printFraction(){
        if(numerator==0){
            cout <<"0" <<endl;
        }else if(denominator==0){
            cout <<"not possible" <<endl;
        }else{
            //si no hay posibles errores se imprime
            if(denominator<0){
                cout <<"-" <<numerator <<"/" <<-denominator <<endl;
            }else{
                cout <<numerator;
                //para no imprimir enteros como fracciones
                if(denominator!=1){
                    cout <<"/" <<denominator;
                }
                cout <<endl;
            }
        }
    }
    void addition(Fraction a,Fraction b){
        numerator=a.numerator*b.denominator+a.denominator*b.numerator;
        denominator=a.denominator*b.denominator;
        int aux=mcd(numerator,denominator);
        numerator=numerator/aux;
        denominator=denominator/aux;
    }
    void multiplication(Fraction a,Fraction b){
        numerator=a.numerator*b.numerator;
        denominator=a.denominator*b.denominator;
        int aux=mcd(numerator,denominator);
        numerator=numerator/aux;
        denominator=denominator/aux;
    }
    void division(Fraction a,Fraction b){
        if((a.denominator!=0)&&(b.denominator!=0)){
            numerator=a.numerator*b.denominator;
            denominator=a.denominator*b.numerator;
            int aux=mcd(numerator,denominator);
            numerator=numerator/aux;
            denominator=denominator/aux;
        }else{
            denominator=0;      //to trigger the error message
        }
    }
};

int main(){
    Fraction a,b,c;
    while(true){
        cout <<"Choose an operation:" <<endl;
    }    
}