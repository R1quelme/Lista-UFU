/*Fa�a um programa que receba um n�mero inteiro maior que 1, verifique
se o n�mero fornecido � primo ou n�o e mostre uma mensagem de
n�mero primo ou de n�mero n�o primo.
Um n�mero � primo quando ele � divis�vel apenas por 1 e por ele mesmo.
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
