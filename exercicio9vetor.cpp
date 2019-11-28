#include<iostream>
using namespace std;

int main(){
   int vetor[6];

   for(int i=0; i<6; i++){
    cout<< "Digite os valores: ";
    cin>> vetor[i];
   }

   for(int i=5; i>=0; i--){
    if(vetor[i] %2==0)
    cout<< vetor[i]<<endl;
   }
   return 0;
}
