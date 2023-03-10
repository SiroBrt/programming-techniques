#include <iostream>
#include <cmath>
#include <string>
using namespace std;
bool pararTodo=0;

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
        string str1,str2;
        cout <<"Introduce the numerator: ";
        cin >>str1;
        cout <<"Introduce the denominator: ";
        cin >>str2;
        try{
            a=stoi(str1);
            b=stoi(str2);
            //simplificar
            if(b<0){
                b=-b;
                a=-a;
            }
            int r=mcd(a,b);
            f.numerator=a/r;
            f.denominator=b/r;
            if(f.denominator==0){
                throw (1);
            }    
        }catch(...){
            pararTodo=1;
        }
        
        
    }
    void printFraction(){
        if(denominator==0){
            cout <<"not possible (indetermination of type num/0)" <<endl;
            pararTodo=1;
        }else if(numerator==0){
            cout <<"0";
        }else{
            //ponemos el menos arriba
            if(denominator<0){
                numerator=-numerator;
                denominator=-denominator;
            }
            //si no hay posibles errores se imprime
            if(numerator<0){
                cout <<"(" <<numerator;
                //para no imprimir enteros como fracciones
                if(denominator!=1){
                    cout <<"/" <<denominator;
                }
                cout <<")";
            }else{
                cout <<numerator;
                if(denominator!=1){
                    cout <<"/" <<denominator;
                }
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
        if(b.denominator!=0){
            numerator=a.numerator*b.denominator;
            denominator=a.denominator*b.numerator;
            int aux=mcd(numerator,denominator);
            numerator=numerator/aux;
            denominator=denominator/aux;
        }else{
            pararTodo=1;
        }
    }
};

int main(){
    Fraction a,b,c;
    string chosen;
    bool seguir=1;
    while(seguir){
        pararTodo=0;
        cout <<"--------------------------" <<endl;
        cout <<"Menu: \n1.Addition \n2.Multiplication \n3.Division \n4.End \nChoose an operation: ";
        cin >>chosen;
        if(chosen=="1"){
            cout <<"--------------------------" <<endl;
            Fraction a,b,c;
            Fraction::readFraction(a);
            Fraction::readFraction(b);
            c.addition(a,b);
            if(pararTodo==0){
                a.printFraction();
                cout <<"+";
                b.printFraction();
                cout <<"=";
                c.printFraction();
                cout <<endl <<endl;
            }else{
                cout <<"not possible \n";
            }
        }else if(chosen=="2"){
            cout <<"--------------------------" <<endl;
            Fraction a,b,c;
            Fraction::readFraction(a);
            Fraction::readFraction(b);
            c.multiplication(a,b);
            if(pararTodo==0){
                a.printFraction();
                cout <<"*";
                b.printFraction();
                cout <<"=";
                c.printFraction();
                cout <<endl <<endl;
            }else{
                cout <<"not possible \n";
            }
        }else if(chosen=="3"){
            cout <<"--------------------------" <<endl;
            Fraction a,b,c;
            Fraction::readFraction(a);
            Fraction::readFraction(b);
            c.division(a,b);
            if(pararTodo==0){
                a.printFraction();
                cout <<"/";
                b.printFraction();
                cout <<"=";
                c.printFraction();
                cout <<endl <<endl;
            }else{
                cout <<"not possible \n";
            }
        }else if(chosen=="4"){
            cout <<"Goodbye \n" <<"--------------------------" <<endl;
            seguir=0;
        }else{
            cout <<"Invalid option" <<endl;
        }
    }
}