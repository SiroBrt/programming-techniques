#include <iostream>
#include <set>
#include <utility>
#include <list>
#include <vector>
using namespace std;
pair <string,int> pair1,pair2,aux;

void showAllList(list <int> input){
    for(auto i:input){
        cout <<i <<" ";
    }
}
void showAllSet(set <int> input){
    for(auto i:input){
        cout <<i <<" ";
    }
}
set <int> remove30Set(set <int> input){
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
    //set
    set <int> set1={1,0,2,9,30,8,4,7,50,60},set2;
    cout <<"set 1:" <<endl;
    showAllSet(set1);
    set2=set1;
    cout <<endl <<"set 2:" <<endl;
    showAllSet(set2);
    set2=remove30Set(set2);
    cout <<endl <<"new set 2:" <<endl;
    showAllSet(set2);
    
    //pair
    cout <<"Introduce first string: ";
    cin >>pair1.first;
    cout <<"Introduce first value: ";
    cin >>pair1.second;
    cout <<"Introduce second string: ";
    cin >>pair2.first;
    cout <<"Introduce second value: ";
    cin >>pair2.second;
    aux.first=pair1.first;
    aux.second=pair1.second;
    pair1.first=pair2.first;
    pair1.second=pair2.second;
    pair2.first=aux.first;
    pair2.second=aux.second;
    cout <<pair1.first <<" " <<pair1.second <<endl <<pair2.first <<" " <<pair2.second;
    
    //list
    //Create two lists list1 and list2
    list <int> list1={1,0,2,9,3,8,10,4,7,5,6},list2={0,1,9,2,8,3,7,4,6,5};
    cout <<"list 1: ";
    showAllList(list1);
    //Use the function sort to order list2.
    cout <<endl <<"list 2: ";
    showAllList(list2);
    //Remove the first five elements from front in list1.
    //Remove the first five elements from front in list2.
    for(int i=0;i<5;i++){
        list1.erase(list1.begin());
        list2.erase(list2.begin());
    }
    cout <<endl <<"new list1: ";
    showAllList(list1);
    cout <<endl <<"new list2: ";
    showAllList(list2);
    //Seek the first element of list1.
    //Seek the last element of list2.
    cout <<endl <<"seek first list1: " <<list1.front() <<endl <<"seek last list2: " <<list2.back    () <<endl;
    //Insert 5 elements with the same value 10 at the beginning of list1
    for(int i=0;i<5;i++){
        list1.push_front(10);
    }
    //Remove all the elements with value 10 from list1.
    list1.remove(10);
    cout <<"newer list1: ";
    showAllList(list1);
    //Use size() to know the number of elements in list1.
    cout <<endl <<"size of list1: " <<list1.size() <<endl;
    //Reverse the elements of list2.
    list1.reverse();
    cout <<"newer list2: ";
    showAllList(list2);
    //Erase the first element of list2.
    list2.erase(list2.begin());
    //Remove all elements from list1.
    list1.erase(list1.begin(),list1.end());
    //Check if list1 is empty or not.
    if(list1.size()==0){
        cout <<endl <<"list1 empty";
    }else{
        cout <<endl <<"list1 not empty";
    }
    //Assign list1 to new values 2 2 2 2 2.
    list1={2,2,2,2,2};
    cout <<endl <<"newest list1: ";
    showAllList(list1);
    //vector
    vector<int> v={10,20,30,40};
    /*functions
    cout <<"size: " <<v.size() <<endl;
    cout <<"empty: " <<v.empty() <<endl;
    cout <<"first: " <<v.front() <<endl;
    cout <<"last: " <<v.back() <<endl;
    v.pop_back();                       //remove last number
    v.push_back(50);                    //add number to the end
    v.insert(v.begin(),7);              //add something (7) at the position specified (v.begin)
    v.erase(v.begin+4);*/                 //remove the element in entry given(1+4)
    //normal print
    for(int i=0; i<v.size(); i++){
        cout <<v[i] <<" ";
    }
    cout <<endl <<"done" <<endl;

    //print with iterator
    vector<int>::iterator i;
    for(i=v.begin(); i !=v.end(); i++)
    cout <<*i <<" ";
    
}