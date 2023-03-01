#include <iostream>
#include <map>
#include <vector>
using namespace std;
map <int,int> numeros,todos;
int limit=223,found;
long int sum=0;
vector <int> elegidos;

int sumaDivisores(int input){
    int output=0;
    for(int i=1;i<=input/2;i++){
        if(input%i==0){
            output+=i;
        }
    }
    return output;
}

int main(){
    for(int i=1;i<=limit;i++){
        numeros[i]=sumaDivisores(i);
        if(numeros[i]>i){
            elegidos.push_back(i);
        }
    }
    for(int i=0;i<=limit;i++){
        todos[i]=1;
    }
    for(int i=0;i<elegidos.size();i++){
        for(int j=i;j<elegidos.size();j++){
            if (elegidos[i]+elegidos[j]>limit){
                break;
            }
            todos[elegidos[i]+elegidos[j]]=0;
        }
    }
    for(int i=1;i<=limit;i++){
        sum+=i*todos[i];
    }
    //cout <<endl <<"total=" <<sum;
}