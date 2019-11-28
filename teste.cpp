#include <iostream>
using namespace std;

int main(){

    int matriz[4][4];
    int matriz1[4][4];

for(int l=0; l<4; l++){
    for(int c=0; c<4; c++){
     cout<<"Digite um valor: ";
     cin>>matriz[l][c];
    }
}
for(int c=0; c<4; c++){
    for(int l=0; l<4; l++){
     cout<<"Digite um valor: ";
     cin>>matriz1[l][c];
    }
}


cout << "matriz L C: " << endl;

for(int c=0; c<4; c++){
    for(int l=0; l<4; l++){
     cout<< matriz1[l][c] << "\t"  ;
    }
    cout << endl;
}
cout << endl << endl << endl;

cout << "matriz C L: " << endl;
for(int l=0; l<4; l++){
    for(int c=0; c<4; c++){
     cout<< matriz1[l][c] << "\t"  ;
    }
    cout << endl;
}



return 0;
}
