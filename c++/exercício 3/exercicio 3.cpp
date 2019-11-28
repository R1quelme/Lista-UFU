//exercicio 3 da lista de exercícios
/*Faça um programa que receba um número inteiro maior que 1, verifique
se o número fornecido é primo ou não e mostre uma mensagem de
número primo ou de número não primo.
Um número é primo quando ele é divisível apenas por 1 e por ele mesmo.
*/

#include<iostream>
using namespace std;

int main()
{
    int n1, n2, n3;
    cout<<("primeiro numero: ");
    cin>> (n1);
    cout<< ("segundo numero: ");
    cin>> (n2);
    cout<< ("terceiro numero: ");
    cin>>(n3);

    if ((n1 <= n2) && (n2 <= n3))
        cout << n1 <<  n2 <<  n3;
    else if((n1 <= n3) && (n3 <= n2))
        cout<< n1 << n3 << n2;
    else if ((n2 <= n1) && (n1 <= n3))
        cout<< n2 << n1 << n3;
    else if ((n2 <= n3) && (n3 <= n1))
        cout<< n2 << n3 << n1;
    else if ((n3 <= n1) && (n1 <= n2))
        cout<< n3 << n1 << n2;
    else if ((n3 <= n2) || (n2 <= n1))
        cout <<"a ordem crescente e " << n3 << " < " << n2 << " < " << n1;

// printf("%d,%d,%d", n1,n2,n3)
    return 0;
}
