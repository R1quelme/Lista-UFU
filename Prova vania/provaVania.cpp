#include<iostream>
using namespace std;

int main(){
    string vetor[30];
    int Jose=0;
    int Maria=0;
    int cont=0;
    int posicao=0;
    int posicaoM=0;

    for(int i=0; i<30; i++){
        cout<<"Digite um nome para o vetor "<< i+1 <<endl;
        cin>>vetor[i];
    }

    for(int i=0; i<30; i++){
        if(vetor[i]== "Jose"){
        Jose=Jose+1;
        posicao=i+1;
    }
    }

    for(int i=30; i>0; i++){
        if(vetor[i]== "Maria"){
        Maria=Maria+1;
    }


    }
    cout<< "O numero de vezes que o nome Jose apareceu foi: "<<Jose<<endl;
    cout<< "O numero de vezes que o nome Maria apareceu foi: "<<Maria<<endl;
    cout<< "A ultima posicao de Jose no vetor foi a "<< posicao<<endl;
    cout<< "A primeira posicao de Maria no vetor foi a "<< posicaoM<<endl;

    return 0;
}
