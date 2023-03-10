#include <iostream>
using namespace std;
int length=10;

void ordenar(int v[]){
    //qué diablos es esto -Yago 2023    Es bubble sort en array
    int aux,i,j;
    for (i=0; i<length-1; i++){        //Acabo de perder tres años de vida -Yago 2020
        for (j=0; j<length-i-1; j++){   //Solo digo que no es el momento (de optimizar) -Yago 2023
            if (v[j]<v[j+1]){           //Qué está pasando aquí -Yago 2023
                aux=v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
            }
        }
    }
    for (i=0; i<=length-1; i++){        //Has puesto tú el (puto) igual -Yago 2023
        cout <<v[i] <<" ";
    }
    
}

int main (){
    int num[length];
    for (int i=0; i<=length-1; i++){
        cin >>num[i];
    }
    ordenar(num);
}