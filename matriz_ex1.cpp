#include<iostream>
using namespace std;

int main(){
     int matriz[4][4];
     int l,c;
     int cont=0;

     for(l=0; l<4; l++){
        for(c=0; c<4; c++){
           cin>> matriz[l][c];
        }
     }

    for(l=0; l<4; l++){
        for(c=0; c<4; c++){
           cout<<matriz[l][c] << " ";
        }
        cout<< endl;
     }

    for(l=0; l<4; l++){
        for(c=0; c<4; c++){
           if(matriz[l][c]>=10)
            cont=cont+1;
           }
     }
     cout<<"A matriz possui "<<cont<<" valores maiores que 10";

return 0;
}
