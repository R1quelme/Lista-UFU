#include <iostream>
using namespace std;

int main(){
    int vetor[10];
    int menor;
    int maior=0;
    for(int i=0; i<10; i++){
        cout<< "escreva o valor que deseja adicionar a posicao " << i<< endl;
        cin >> vetor[i];
    }

    for (int i=0; i<10; i++){
            if (maior<vetor[i]){
            maior = vetor[i];
        }
    }
    menor=maior;
    for (int i=0; i<10; i++){

        if (menor>vetor[i]){
            menor = vetor[i];
        }
     }
    cout<< "o maior elemento e " << maior<< endl;
    cout<< "o menor elemento e " << menor;
return 0;
}
