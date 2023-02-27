#include <iostream>
#include <fstream>
#include <set>
#include <string.h>
using namespace std;

int main(){
    fstream file;
    file.open("meVoyAMatar.txt");
    char ch;
    string texto;
    set <string> nombres;
    while (true) {
		file >>texto;
        if (file.eof()){
			break;
		}else{
            cout <<texto <<" " <<texto.find(",") <<endl;
        }
    }
}
