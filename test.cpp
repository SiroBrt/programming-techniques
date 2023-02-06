#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> v;
    int a;
    for(int i=0; i<3; i++){
        cin >>a;
        v.push_back(a);
    }
/*
    for(int i=0; i<v.size(); i++){
        cout <<v[i] <<" ";
    }
    cout <<endl;

    for (int j=v.size()-1; j>=0; j--){
        cout <<v[j] <<" ";
    }
*/
    vector<int>::iterator i;
    for(i=v.begin(); i!=v.end(); i++){
        cout <<*i <<" ";
    }
    cout <<endl;
    for(i=v.end(); i!=v.begin(); i--){
        cout <<*(i-1) <<" ";
    }
}