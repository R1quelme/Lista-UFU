#include <iostream>

using namespace std;
 int main() {
setlocale(LC_ALL, "Portuguese");
 float nota1, nota2, media, totalclasse;
 int totalAprovados, totalExame, totalReprovados;
 totalAprovados = totalExame = totalReprovados = 0;
 totalclasse = 0;
 for (int i = 1; i <= 6; i++)
 {
  	cout << "Digite a primeira nota: ";
  	cin >> nota1;
    cout << "Digite a segunda nota: ";
    cin >> nota2;
    media = (nota1 + nota2)/2;
    totalclasse = totalclasse + media;
    cout << "A m�dia do aluno �: " << media<<endl;
    if(media < 3)
	  	{
  	 	cout << "Reprovado"<<endl<<endl;
  	 	totalReprovados++;
	  	}
	  	else if(media < 7)
	  	{
  	 	cout << "Exame"<<endl<<endl;
  	 	totalExame++;
	  	}
	  	else
	  	{
	  	 	cout << "Aprovado"<<endl<<endl;
	  	 	totalAprovados++;
	  	}
 }  cout <<"\nO total de alunos aprovados �: "<< totalAprovados;
    cout <<"\nO total de alunos reprovados �: "<< totalReprovados;
    cout <<"\nO total de alunos de exame �: "<< totalExame;
    cout << "\nA m�dia da classe �: " << totalclasse/6;
    return 0;
}

