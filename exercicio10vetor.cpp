#include<iostream>
using namespace std;

int main(){
    int vetor[15];
    int aluno=1;
    int somamedia=0;
    int media;

    for(int i=0; i<15; i++){
        cout<<"Nota do aluno "<< aluno<<endl;
        cin>> vetor[i];
        aluno= aluno+1;
    }

    for (int i=0; i<15; i++){
        somamedia= somamedia+ vetor[i];
    }

    media= somamedia/15;
    cout<<"a media total dos alunos e "<<media<<endl;


return 0;
}
