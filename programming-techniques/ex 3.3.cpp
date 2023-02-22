#include <iostream>
using namespace std;
int input[3],selection;

int triangle(int base,int height){
    return base*height/2;
}

int rectangle(int base,int height){
    return base*height;
}

int trapezoid(int edge1,int edge2,int height){
    return (edge1+edge2)*height/2;
}

int main(){
    cout <<"Calculate the area" <<endl <<"------------------------" <<endl <<"1. Calculate the area of a triangle (base, height)" <<endl <<"2. Calculate the area of a trapezoid (edge a, edge b, height)" <<endl <<"3. Calculate the area of a rectangle (base, height)" <<endl;
    cin >>selection;
    switch (selection){
    case 1:
        cout <<"Introduce the base: ";
        cin >>input[0];
        cout <<"Introduce the height: ";
        cin >>input[1];
        cout <<"Area=" <<triangle(input[0],input[1]);
        break;
    case 2:
        cout <<"Introduce the edge a: ";
        cin >>input[0];
        cout <<"Introduce the edge b: ";
        cin >>input[1];
        cout <<"Introduce the height: ";
        cin >>input[2];
        cout <<"Area=" <<trapezoid(input[0],input[1],input[2]);
        break;
    case 3:
        cout <<"Introduce the base: ";
        cin >>input[0];
        cout <<"Introduce the height: ";
        cin >>input[1];
        cout <<"Area=" <<rectangle(input[0],input[1]);
        break;
    default:
        cout <<"What ·-·";
        break;
    }
}