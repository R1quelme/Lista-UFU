#include<iostream>
using namespace std;

int main(){
int matriz[4][4];
int maior=0;


for(int l=0; l<4; l++){
    for(int c=0; c<4; c++){
     cout<<"Digite um valor: ";
     cin>>matriz[l][c];
    }
}

for(int l=0; l<4; l++){
    for(int c=0; c<4; c++){
    if(maior<matriz[l][c]){
        maior=matriz[l][c];

    }
    }
}
for(int l=0; l<4; l++){
    for(int c=0; c<4; c++){
    if(maior == matriz[l][c]){
        cout << "O maior valor foi localizado na linha: " << l << " e na coluna: " << c << endl;

    }
    }
}


for(int l=0; l<4; l++){
    for(int c=0; c<4; c++){
        cout<<matriz[l][c]<<"\t";

        }
        cout<<endl;
    }

    cout<<"O maior valor foi: "<< maior<<endl;



return 0;
}
