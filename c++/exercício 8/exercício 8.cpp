/*Faça um programa que receba a altura e o peso de uma pessoa. De
acordo com a tabela a seguir, verifique e mostre a classificação da pessoa:
ALTURA*/

#include <iostream>
 using namespace std;

int main() {
 setlocale(LC_ALL, "Portuguese");

 float altura, peso;

 cout << "Digite a altura: ";
 cin >> altura;
 cout << "Digite o peso: ";
 cin >> peso;
 if(altura < 1.2)
 {
  	if(peso <= 60)
    cout << "A";
  	else if(peso <= 90)
  	cout << "D";
  	else
    cout << "G";
 }
 else if(altura <= 1.7)
 {
  	if(peso <= 60)
    cout << "B";
  	else if(peso <= 90)
  	cout << "E";   	else
  	cout << "H";
 }
 else
 {
  	if(peso <= 60)
    cout << "C";
  	else if(peso <= 90)
  	cout << "F";
  	else
  	cout << "I";
 }
 return 0;
}

