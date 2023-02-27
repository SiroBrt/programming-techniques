/*Using names.txt (right click and 'Save Link/Target As...'), a 46K text file containing over five-thousand first names, begin by sorting it into alphabetical order. Then working out the alphabetical value for each name, multiply this value by its alphabetical position in the list to obtain a name score.
For example, when the list is sorted into alphabetical order, COLIN, which is worth 3 + 15 + 12 + 9 + 14 = 53, is the 938th name in the list. So, COLIN would obtain a score of 938 × 53 = 49714.
What is the total of all the name scores in the file?*/
#include <iostream>
#include <fstream>
#include <set>
#include <string.h>
using namespace std;
char ch;
string texto,letra;
set <string> nombres,alfabeto{"Q","W","E","R","T","Y","U","I","O","P","A","S","D","F","G","H","J","K","L","Z","X","C","V","B","N","M"};
int totalSum,smolSum,countName=0,countLetter;
    

int main(){
    fstream file;
    file.open("p022_names.txt");
    while (true) {
		file >>ch;
        if (file.eof()){
            nombres.insert(texto);
			break;
		}else{
            texto=texto+ch;
            if ((texto.find(",")<100)&&(texto.find(",")>0)){
                nombres.insert(texto.substr(0,texto.size()-1));
                texto="";
            }
        }
    }
    for(auto i:nombres){
        countName++;
        smolSum=0;
        for(int j=0;j<i.length();j++){
            letra=i.substr(j,1);
            countLetter=0;
            for(auto k:alfabeto){
                countLetter++;
                if(letra==k){
                    smolSum+=countLetter;
                    break;
                }
            }
        }
        totalSum=totalSum+smolSum*countName;
        cout <<countName <<"- " <<i <<"->" <<smolSum <<endl;
    }
    cout <<"total=" <<totalSum;
}

