//exercicio 4 da lista de exercicios
/*Fa�a um programa que receba um n�mero inteiro maior que 1, verifique
se o n�mero fornecido � primo ou n�o e mostre uma mensagem de
n�mero primo ou de n�mero n�o primo.
Um n�mero � primo quando ele � divis�vel apenas por 1 e por ele mesmo.
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
    cout<< ("menu de op�oes: ")<<endl;
    cout<< ("1 � Somar dois numeros")<<endl;
    cout<< ("2 � Raiz Quadrada de um numero")<<endl;
    cout<< ("************************************")<<endl;
    cout<< ("Digite a op�ao desejada: ")<<endl;
    cin>> (opcao);


    if (opcao == 1){
    cout<<("primeiro n�mero: ");
    cin >> n1;
    cout<<("segundo n�mero: ");
    cin >> n2;
    cout<< "a soma �: " << n1 + n2;
    } else if (opcao == 2){
    cout<< ("digite o numero desejado: ");
    cin >> N1;
    cout << ("A raiz quadrade �: ") << pow(N1, 0.5);
    }
return 0;
}

