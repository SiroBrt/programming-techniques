#include <iostream>
#include <cmath>
using namespace std;

class Shape{
public:
    float ar,prmtr;
    float getArea(){
        return ar;
    }
    float getPerimeter(){
        return prmtr;
    }
    Shape(){
        ar=prmtr=0;
    }
};
class Square:public Shape{
    public:
    float side;
    Square(){
        ar=prmtr=side=0;
    }
    Square(float l){
        side=l;
        ar=l*l;
        prmtr=4*l;
    }
};
class Triangle:public Shape{
    public:
    float base,height,hyp;
    Triangle(){
        ar=prmtr=base=height=hyp=0;
    }
    Triangle(float b,float h){
        base=b;
        height=h;
        hyp=sqrt(pow(base,2)+pow(height,2));
        ar=base*height/2;
        prmtr=base+height+hyp;
    }
};

int main(){
    float num1,num2;
    cout <<"introduce the base: ";
    cin >>num1;
    cout <<"introduce the height (for triangle): ";
    cin >>num2;
    Triangle t1(num1,num2);
    Square s1(num1);
    cout <<"area square=" <<s1.getArea() <<"\nperimeter square=" <<s1.getPerimeter() <<"\narea triangle=" <<t1.getArea() <<"\nperimeter triangle=" <<t1.getPerimeter() ;
}