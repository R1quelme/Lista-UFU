#include <iostream>
using namespace std;
#include <math.h>

int main()
{
    setlocale (LC_ALL, "portuguese");
    int n1, n2, opcao;
    float N1;

do{
    cout<< ("************")<<endl;
    cout<< ("menu de opçoes: ")<<endl;
    cout<< ("1 – Somar dois numeros")<<endl;
    cout<< ("2 – Raiz Quadrada de um numero")<<endl;
    cout<< ("************")<<endl;
    cout<< ("Digite a opçao desejada: ")<<endl;
    cin>> (opcao);
}while(opcao != 1 && opcao != 2); // isso impede de digitar outra coisa

    if (opcao == 1){ //Operador de comparacao eh '==' e nao '='
    cout<<("primeiro número: ");
    cin >> n1;
    cout<<("segundo número: ");
    cin >> n2;
    cout<< "a soma é: " << n1 + n2;
   } else if (opcao == 2){ // mesma coisa aqui **
    cout<< ("digite o numero desejado: ");
    cin >> N1;
    cout<< "A raiz quadrada é " << pow(N1, 0.5);
   }

return 0;
}
