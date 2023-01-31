#include <iostream>
using namespace std;
int a[5];

int main(){
	for (int i=1;i<=5;i++){
		a[i-1]=i;
		cout <<a[i-1] <<"\n";
	}
}
