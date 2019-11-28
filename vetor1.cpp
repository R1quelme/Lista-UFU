#include <iostream>
using namespace std;



int main () {
    int A[6];
    //letra a
    A[0] = 1;
    A[1] = 0;
    A[2] = 5;
    A[3] = -2;
    A[4] = -5;
    A[5] = 7;

    //letra b
    int soma=0;
    soma = A[0] + A[1] + A[5];
    cout << "soma: " << soma << endl;

    //letra c
    A[3] = 100;

    //letra d
    cout << "Lista: " << endl;
    for (int i=0; i<6; i++) {
        cout << A[i] << endl;
    }

 cout << "vetor posicao 5: "<< A[5];

return 0;
}
