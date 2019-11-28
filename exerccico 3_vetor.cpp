using namespace std;
#include <iostream>

int main () {
float vetor[10], vet2[10];
for(int i=0; i<10; i++){
cin >> vetor[i];
}

for(int i=0; i<10; i++){

vet2[i] = vetor[i]*vetor[i];

}

for(int i=0; i<10; i++){
cout << vet2[i]<< endl;
}
return 0;
}
