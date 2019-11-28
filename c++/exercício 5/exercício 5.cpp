/*Faça um programa que receba o código correspondente ao cargo de um
funcionário e seu salário atual e mostre o cargo, o valor do aumento e
seu novo salário. Os cargos estão na tabela a seguir:*/

#include <iostream>
using namespace std;

int main(){
int cargo;
float sal;


do{
 cout<< ("Tabela de cargos: ")<< endl;
 cout<< ("1- Escriturario")<< endl;
 cout<< ("2- Secretario")<< endl;
 cout<< ("3- Caixa")<< endl;
 cout<< ("4- Gerente ")<< endl;
 cout<< ("5- Diretor ")<< endl;
 cout<< ("Qual o cargo do funcionario?: ");
 cin>> cargo;
}while(cargo!= 1 && cargo!= 2 && cargo!=3 && cargo!=4 && cargo!=5);

 cout<< ("digite o salario atual do funcionario: ");
 cin>> sal;

 switch(cargo){
case 1:
     cout<< ("o aumento e de: ")<< (sal*50)/100 << endl;
     cout<< ("o novo salario e: ")<< (sal*50)/100 + sal;
     break;
case 2:
     cout<< ("o aumento e de: ")<< (sal*35)/100 << endl;
     cout<< ("o novo salario e: ")<< (sal*35)/100 + sal;
     break;
case 3:
      cout<< ("o aumento e de: ")<< (sal*20)/100 << endl;
     cout<< ("o novo salario e: ")<< (sal*20)/100 + sal;
      break;
case 4:
     cout<< ("o aumento e de: ")<< (sal*10)/100 << endl;
     cout<< ("o novo salario e: ")<< (sal*120)/100 + sal;
     break;
case 5:
    cout<<("sem aumento");
    break;
default:
    cout<<("valor errado");
}
}
