/*By starting at the top of the triangle below and moving to adjacent numbers on the row below, the maximum total from top to bottom is 23.
3
7 4
2 4 6
8 5 9 3
That is, 3 + 7 + 4 + 9 = 23.
Find the maximum total from top to bottom of the triangle below:
75
95 64
17 47 82
18 35 87 10
20 04 82 47 65
19 01 23 75 03 34
88 02 77 73 07 63 67
99 65 04 28 06 16 70 92
41 41 26 56 83 40 80 70 33
41 48 72 33 47 32 37 16 94 29
53 71 44 65 25 43 91 52 97 51 14
70 11 33 28 77 73 17 78 39 68 17 57
91 71 52 38 17 14 91 43 58 50 27 29 48
63 66 04 68 89 53 67 30 73 16 69 87 40 31
04 62 98 27 23 09 70 98 73 93 38 53 60 04 23*/
#include <iostream>
#include <cmath>
using namespace std;
int num=pow(2,14),rows=14,direction,sum,column,piramide[15][15]={{75},{95,64},{17,47,82},{18,35,87,10},{20,04,82,47,65},{19,01,23,75,03,34},{88,02,77,73,07,63,67},{99,65,04,28,06,16,70,92},{41,41,26,56,83,40,80,70,33},{41,48,72,33,47,32,37,16,94,29},{53,71,44,65,25,43,91,52,97,51,14},{70,11,33,28,77,73,17,78,39,68,17,57},{91,71,52,38,17,14,91,43,58,50,27,29,48},{63,66,04,68,89,53,67,30,73,16,69,87,40,31},{04,62,98,27,23,9,70,98,73,93,38,53,60,04,23}};

string toBinary(int n){
    string r;
    while(n!=0){
        r=(n%2==0 ?"0":"1")+r;
        n/=2;
    }
    int aux=r.length();
    if(r.length()<rows){
        for(int i=0;i<rows-aux;i++){
            r="0"+r;
        }
    }
    return r;
}

int main(){
    long int maximo=0;
    string position;
    for(int i=0;i<num;i++){
        column=0;
        position=toBinary(i);
        sum=piramide[0][0];
        for(int j=0;j<position.length();j++){
            direction=stoi(position.substr(j,1));
            column+=direction;
            sum+=piramide[j+1][column];
        }
        if(sum>maximo){
            maximo=sum;
        }
    }
    cout <<maximo;
}