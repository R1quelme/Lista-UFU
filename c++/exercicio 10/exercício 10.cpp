#include <iostream>
 using namespace std;

int main() {  	setlocale(LC_ALL, "Portuguese");
float idade, peso, altura, qtde, media_idade, media_altura, porcentagem, total80;
idade = peso = altura, qtde = media_idade = media_altura = porcentagem = total80 = 0;

for(int i = 1; i <= 5 ; i++){
 	 	media_idade = 0;
 	 	for(int j = 1; j <= 11 ; j++)
 	 	{
 	 	 	cout << "Digite a idade do " << j << " º jogador: ";
 	 	 	cin >> idade;
 	 	 	cout << "Digite o peso do " << j << " º jogador: ";
 	 	 	cin >> peso;
 	 	 	cout << "Digite a altura do " << j << " º jogador: ";
 	 	 	cin >> altura;
 	 	 	if(idade < 18)
            qtde = qtde + 1;
 	 	 	media_idade = media_idade + idade;
 	 	 	media_altura = media_altura + altura;
 	 	 	if(peso > 80)
            total80 = total80 + 1;
 	    }
 	    cout << "\nMédia de idade do " << i << "º time é: " << media_idade/11<<"\n\n";
 	}
 	cout << "\nA quantidade de jogadores menores que 18 anos é: " << qtde;
 	3cout << "\nA média da altura de todos jogadores é: " << media_altura /55;  	cout << "\nA procentagem de jogadores com mais de 80km é: " << porcentagem*100/55;     return 0;
}
