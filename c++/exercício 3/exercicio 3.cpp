//exercicio 3 da lista de exerc�cios
/*Fa�a um programa que receba um n�mero inteiro maior que 1, verifique
se o n�mero fornecido � primo ou n�o e mostre uma mensagem de
n�mero primo ou de n�mero n�o primo.
Um n�mero � primo quando ele � divis�vel apenas por 1 e por ele mesmo.
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
