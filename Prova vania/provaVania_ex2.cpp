#include<iostream>
using namespace std;

int main(){
    int vetor[12];

    for(int i=0; i<12; i++){
        cout<<"Valor gasto no mes "<<i+1<<endl;
        cin>>vetor[i];
        cout<<endl;
    }

    cout<< "valores gastos em cada mes"<<endl;

    for(int i=0; i<12; i++){
        cout<<"Valor gasto no mes "<<i+1<<": "<< vetor[i]<<endl;
    }

    return 0;
}
