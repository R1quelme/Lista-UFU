#include<iostream>
using namespace std;

    int main(){
        int vetor[10];
        int igual;

        for(int i=0; i<10; i++){
            cout<<"escreva o valor "<<endl;
            cin>>vetor[i];
        }

        for(int i=0; i<10; i++){
            if(vetor[i]==vetor[i]){
                igual=vetor[i];
            }
        }
        cout<< "O numeros que se repetem sao: "<<igual;
    return 0;
    }
