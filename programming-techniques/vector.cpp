#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v={10,20,30,40};
    /*
    //functions
    cout <<"size: " <<v.size() <<endl;
    cout <<"empty: " <<v.empty() <<endl;
    cout <<"first: " <<v.front() <<endl;
    cout <<"last: " <<v.back() <<endl;
    v.pop_back();                       //remove last number
    v.push_back(50);                    //add number to the end
    v.insert(v.begin(),7);              //add something (7) at the position specified (v.begin)
    v.erase(v.begin+4);                 //remove the element in entry given(1+4)
    */

    //normal print
    for(int i=0; i<v.size(); i++){
        cout <<v[i] <<" ";
    }

    //print with iterator
    vector<int>::iterator i;
    for(i=v.begin(); i !=v.end(); i++)
    cout <<*i <<" ";
}