#include <iostream>
using namespace std;

int main (){
int vetor[10];
int maior=0;
int posicao=0;

for(int i=0; i<10; i++) {
    cout<< "digite o valor"<< endl;
    cin>> vetor[i];
}

for(int i=0; i<10; i++) {
    if(vetor[i]>maior) {
        maior= vetor[i];
        posicao=i+1;
    }
}

    cout<< "Seu maior valor e: " << maior<< endl;
    cout<< "A posiçao do maior valor e "<< posicao;


return 0;



}
