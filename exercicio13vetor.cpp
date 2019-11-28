#include<iostream>
using namespace std;

    int main(){

        int vetor[5];
        int maior=0;
        int menor;
        int posicao;
        int posicaomenor;

        for(int i=0; i<5; i++){
            cout<<"Digite o valor desejado: "<<endl;
            cin>>vetor[i];
        }

        for(int i=0; i<5; i++){
            if(maior<vetor[i]){
            maior=vetor[i];
            posicao=i+1;
            }
        }

        for(int i=0; i<5; i++){
            if(menor>vetor[i]){
            menor=vetor[i];
            posicaomenor=i+1;
            }
        }

        cout<<"posicao do maior "<<posicao<<endl;
        cout<<"posicao do menor "<<posicaomenor;


return 0;
    }

