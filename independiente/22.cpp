#include <iostream>
#include <fstream>
#include <set>
using namespace std;

int main(){
    fstream file;
    file.open("p022_names.txt");
    char ch;
    string name;
    set <string> texto;
    while (true) {
		file >>ch;
        if (file.eof()){
			break;
		}else{
            
        }
    }
    for(auto i:texto){
        cout <<i;
    }
}
