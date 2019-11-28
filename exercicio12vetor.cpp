#include<iostream>
using namespace std;

int main(){
    int vetor[5];
    int menor;
    int maior=0;
    int somamedia=0;
    int media;

    for(int i=0; i<5; i++){
        cout<< "escreva o valor desejado" << endl;
        cin>>vetor[i];
    }

    for(int i=0; i<5; i++){
        if(menor>vetor[i])
        menor=vetor[i];
    }

    for(int i=0; i<5; i++){
        if(maior<vetor[i])
        maior=vetor[i];
    }

    for(int i=0; i<5; i++){
        somamedia=somamedia+vetor[i];
    }

    media=somamedia/5;

    cout<<"maior: "<<maior<< endl;
    cout<<"menor: "<<menor<< endl;
    cout<<"media: "<<media<< endl;

return 0;
}
