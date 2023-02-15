#include <iostream>
#include <list>
using namespace std;

//Write a function showAll to print the elements on the screen of both lists.
void showAll(list <int> input){
    for(auto i:input){
        cout <<i <<" ";
    }
}

int main(){
    //Create two lists list1 and list2
    list <int> list1={1,0,2,9,3,8,10,4,7,5,6},list2={0,1,9,2,8,3,7,4,6,5};
    cout <<"list 1: ";
    showAll(list1);
    //Use the function sort to order list2.
    cout <<endl <<"list 2: ";
    showAll(list2);
    //Remove the first five elements from front in list1.
    //Remove the first five elements from front in list2.
    for(int i=0;i<5;i++){
        list1.erase(list1.begin());
        list2.erase(list2.begin());
    }
    cout <<endl <<"new list1: ";
    showAll(list1);
    cout <<endl <<"new list2: ";
    showAll(list2);
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
    showAll(list1);
    //Use size() to know the number of elements in list1.
    cout <<endl <<"size of list1: " <<list1.size() <<endl;
    //Reverse the elements of list2.
    list1.reverse();
    cout <<"newer list2: ";
    showAll(list2);
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
    showAll(list1);
}
