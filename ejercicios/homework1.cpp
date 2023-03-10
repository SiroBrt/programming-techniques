#include <iostream>
#include <vector>
using namespace std;
int num,changes;
vector <int> v;

int main(){
    cout <<"Introduce numbers. To stop enter 0." <<endl;
    cin >>num;
    while (num!=0){
        v.push_back(num);
        cin >>num;
    }
    if(v.size()>0){                                //por si v está vacio
        //sort vector
        for(int i=0; i<v.size()-1; i++){
            changes=0;
            for(int j=0; j<v.size()-1-i; j++){
                if (v[j]>v[j+1]){
                    v.insert(v.begin()+j+2,v[j]);
                    v.erase(v.begin()+j);
                    changes++;
                }
            }
            if (changes==0){
                break;
            }
        }

        //print
        for(int k=0; k<v.size(); k++){
            cout <<v[k] <<" ";
        }
        cout <<endl <<"min: " <<v[0] <<endl <<"max: " <<v[v.size()-1] <<endl;
    }else{
        cout <<"No vector to print" <<endl;
    }
}