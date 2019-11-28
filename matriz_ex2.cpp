#include<iostream>
using namespace std;

int main(){
    int matriz[5][5];
    int l,c;

    for(l=0; l<5; l++){
        for(c=0; c<5; c++){
            cout<< "digite os valores para as respectivas posicoes: linha "<<l <<" e coluna "<< c<< endl;
            cin>>matriz[l][c];
        }
    }

    for(l=0; l<5; l++){
            for(c=0; c<5; c++){
               cout<<matriz[l][c] << " ";
            }
            cout<< endl;
         }
return 0;
}
