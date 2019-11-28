#include <iostream>
using namespace std;

int main(){
    int vetor[10];
    int cont=0;

    for(int i=0; i<10; i++){
        cin >> vetor[i];
    }

    for (int i=0; i<10; i++)
    if (vetor[i] %2 ==0){
        cont = cont + 1;
    }

    cout << "Seu vetor possui " << cont << "valores pares!";

    return 0;
}
