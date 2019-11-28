#include<iostream>
using namespace std;
/*switch(expressao){
case const1:
     comandos;
     break;
case const2:
     comandos;
     break;
default:
    comandos;
}
*/
int main (){
    int val;
    cout<< ("escolha uma cor: ");
    cout<< ("[1]vermelho [2]azul [3]amarelo")<<endl;
    cin>> (val);
    switch (val){
      case 1 :
        cout<< ("vermelho");
        break;
      case 2 :
        cout<< ("azul");
        break;
      case 3 :
        cout<< ("amarelo");
        break;
      default:
        cout<< ("valor invalido");
    }
    cout<<endl<< ("programa finalizado");
    return 0;
}
