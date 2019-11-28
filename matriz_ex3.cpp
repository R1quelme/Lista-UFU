#include <iostream>
using namespace std;

int main () {
    int matriz[4][4];


    for(int l=0; l<4; l++){
        for(int c=0; c<4; c++){
            matriz[l][c] = l*c;
        }
    }

    for(int l=0; l<4; l++){
        for(int c=0;c<4;c++){
            cout << matriz[l][c] << "\t";
        }
        cout << endl;
    }


return 0;
}
