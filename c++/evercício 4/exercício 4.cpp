//exercicio 4 da lista de exercicios
/*Faça um programa que receba um número inteiro maior que 1, verifique
se o número fornecido é primo ou não e mostre uma mensagem de
número primo ou de número não primo.
Um número é primo quando ele é divisível apenas por 1 e por ele mesmo.
*/

#include<iostream>
using namespace std;
#include <math.h>


int main()
{
    setlocale (LC_ALL, "portuguese");
    int n1, n2, opcao;
    float N1;

    cout<< ("************************************")<<endl;
    cout<< ("menu de opçoes: ")<<endl;
    cout<< ("1 – Somar dois numeros")<<endl;
    cout<< ("2 – Raiz Quadrada de um numero")<<endl;
    cout<< ("************************************")<<endl;
    cout<< ("Digite a opçao desejada: ")<<endl;
    cin>> (opcao);


    if (opcao == 1){
    cout<<("primeiro número: ");
    cin >> n1;
    cout<<("segundo número: ");
    cin >> n2;
    cout<< "a soma é: " << n1 + n2;
    } else if (opcao == 2){
    cout<< ("digite o numero desejado: ");
    cin >> N1;
    cout << ("A raiz quadrade é: ") << pow(N1, 0.5);
    }
return 0;
}

