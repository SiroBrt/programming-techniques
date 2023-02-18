#include <iostream>
#include <set>
using namespace std;

void showAll(set <int> input){
    for(auto i:input){
        cout <<i <<" ";
    }
}

set <int> remove30(set <int> input){
    int num;
    for (auto i:input){
        if(i>=30){
            num=i;
            cout <<"posicion " <<i;
            break;
        }
    }
    input.erase(input.begin(),input.find(num));
    return input; 
}

int main(){
    set <int> set1={1,0,2,9,30,8,4,7,50,60},set2;
    cout <<"set 1:" <<endl;
    showAll(set1);
    set2=set1;
    cout <<endl <<"set 2:" <<endl;
    showAll(set2);
    set2=remove30(set2);
    cout <<endl <<"new set 2:" <<endl;
    showAll(set2);
}