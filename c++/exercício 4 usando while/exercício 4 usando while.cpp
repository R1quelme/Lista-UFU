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
    cout<< ("menu de op�oes: ")<<endl;
    cout<< ("1 � Somar dois numeros")<<endl;
    cout<< ("2 � Raiz Quadrada de um numero")<<endl;
    cout<< ("************")<<endl;
    cout<< ("Digite a op�ao desejada: ")<<endl;
    cin>> (opcao);
}while(opcao != 1 && opcao != 2); // isso impede de digitar outra coisa

    if (opcao == 1){ //Operador de comparacao eh '==' e nao '='
    cout<<("primeiro n�mero: ");
    cin >> n1;
    cout<<("segundo n�mero: ");
    cin >> n2;
    cout<< "a soma �: " << n1 + n2;
   } else if (opcao == 2){ // mesma coisa aqui **
    cout<< ("digite o numero desejado: ");
    cin >> N1;
    cout<< "A raiz quadrada � " << pow(N1, 0.5);
   }

return 0;
}
