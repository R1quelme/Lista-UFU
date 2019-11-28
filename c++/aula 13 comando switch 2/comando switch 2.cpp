#include<iostream>
using namespace std;
int main (){
    int val;
    cout<< ("escolha um transporte ");
    cout<< ("[1]carro [2]moto [3]aviao [4]helicoptero")<<endl;
    cin>> (val);

    switch (val){
      case 1 :
      case 2 :
        cout<< ("transporte terrestre")<<endl;
    switch (val){
        case 1:
        cout<< ("voce escolheu carro") << endl;
        case 2:
        cout<< ("voce escolheu moto");
        break;
        }
     break;
      case 3:
      case 4 :
        cout<< ("transporte aereo")<<endl;
      switch (val){
        case 3:
        cout<< ("voce escolheu aviao") << endl;
        case 4:
        cout<< ("voce escolheu helicoptero");
        break;
      }
    break;
      default:
        cout<< ("valor invalido");
     }
    cout<<endl<< ("programa finalizado");
    return 0;
        }
