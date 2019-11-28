#include <iostream>
using namespace std;

int main () {
    string vetor[30];
    int contjose=0, ultijose=0;
    int contmaria=0, primmaria=0;

    for(int i=0; i<30; i++){
        cout << "Digite o nome " << i << ": ";
        cin >> vetor[i];
    }

    for(int i=0; i<30; i++){
        if(vetor[i] == "Jose" || vetor[i]== "jose" || vetor[i] == "JOSE"){
            contjose = contjose + 1;
        }
    }

    for(int i=0; i<30; i++){
        if(vetor[i] == "Maria" || vetor[i]== "maria" || vetor[i] == "MARIA"){
            contmaria = contmaria + 1;
        }
    }

    for(int i=0; i<30; i++){
        if(vetor[i] == "Jose" || vetor[i]== "jose" || vetor[i] == "JOSE" ) {
            ultijose = i;
        }
    }

     for(int i=29; i>=0; i--){
        if(vetor[i] == "Maria" || vetor[i]== "maria" || vetor[i] == "MARIA"){
            primmaria = i;
        }
    }

	cout << "Maria apareceu a primeira vez na posicao: " << primmaria << endl;
	cout << "Jose apareceu a ultima vez na posicao: " << ultijose << endl;
	cout << "Maria se repetiu por " << contmaria << " vezes!" << endl;
	cout << "Jose se repetiu por " << contjose << " vezes!" << endl;
    return 0;
}

