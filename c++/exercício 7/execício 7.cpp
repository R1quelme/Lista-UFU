/*Faça um programa que receba um número inteiro maior que 1, verifique
se o número fornecido é primo ou não e mostre uma mensagem de
número primo ou de número não primo.
Um número é primo quando ele é divisível apenas por 1 e por ele mesmo.
*/

#include <iostream>
using namespace std;

int main(){
int numPrimo;
int numDivisores=0;

cout<< ("Digite um numero: ");
cin>> numPrimo;

for(int i= 1; i<=numPrimo; i++){
    if(numPrimo % i == 0){
        numDivisores++;
    }
}
if(numDivisores == 2){
    cout<< ("o numero digitado e primo");
} else{
    cout<< ("o numero digitado nao e primo");
    }
}
