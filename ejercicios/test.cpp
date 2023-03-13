#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

static vector <pair <pair <string,string>,vector <pair <int,string>>>> Wagons;

int main(){
    pair <string,string> sitio;
    pair <int,string> persona1,persona2;
    vector <pair <int,string>> pasajeros;
    pair <pair <string,string>,vector <pair <int,string>>> vagonPrueba;
    sitio.first="leganes";
    sitio.second="madrid";
    persona1.first=1;
    persona1.second="ID1";
    persona2.first=2;
    persona2.second="ID2";
    pasajeros.push_back(persona1);
    pasajeros.push_back(persona2);
    vagonPrueba.first=sitio;
    vagonPrueba.second=pasajeros;
    Wagons.push_back(vagonPrueba);
    cout <<Wagons[0].second[1].second;
}