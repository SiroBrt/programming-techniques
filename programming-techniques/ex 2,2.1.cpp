#include <iostream>
#include <utility>
using namespace std;
pair <string,int> pair1,pair2,aux;

int main(){
    cout <<"Introduce first string: "
    cin >>pair1.first;
    cout <<"Introduce first value: "
    cin >>pair1.second;

    aux.first=pair1.first;
    aux.second=pair1.second;
    pair1.first=pair2.first;
    pair1.second=pair2.second;
    pair2.first=aux.first;
    pair2.second=aux.second;
}