#include <iostream>
#include <list>
using namespace std;
void showAll(list <int> input){
    for(auto i:input){
        cout <<i <<" ";
    }
}

int main(){
    list <int> list1={1,0,2,9,3,8,4,7,5,6},list2={0,1,9,2,8,3,7,4,6,5};
    cout <<"list 1:" <<endl;
    showAll(list1);
    cout <<endl <<"list 2:" <<endl;
    showAll(list2);
    for(int i=0;i<5;i++){
        list1.erase(list1.begin());
        list2.erase(list2.begin());
    }
    cout <<endl <<"new list 1:" <<endl;
    showAll(list1);
    cout <<endl <<"new list 2:" <<endl;
    showAll(list2);

    cout <<endl <<"seek first list1: " <<list1.front() <<endl <<"seek last list2: " <<list2.back    () <<endl;
    for(int i=0;i<5;i++){
        list1.push_front(10);
    }
    
}