#include<iostream>
using namespace std;

int main(){
    int vetor[10];
    int neg=0;
    int pos=0;

    for(int i=0; i<10; i++){
        cout<<"Digite o numero que deseja: "<<endl;
        cin>> vetor[i];
    }

     for(int i=0; i<10; i++){
       if(vetor[i]<0)
        neg= neg+1;
    }

    for(int i=0; i<10; i++){
       if(vetor[i]>=0)
        pos= pos+vetor[i];
    }

    cout<< "A quantidade de numeros negativos e "<< neg<< endl;
    cout<< "A soma dos numeros positivos e "<< pos;

return 0;
}
