//
// Created by Ana Beatriz Astle on 08/09/25.
//
#include <iostream>
using namespace std;

int maior_elemento(int vet[], int n) {
    if (n-1 == 0) {
        return vet[n-1];
    }
    if (vet[n-1] > vet[n-2]) {
        vet[n-2] = vet[n-1];
        return maior_elemento(vet,n-1);
    }
    return maior_elemento(vet, n-1);
}

int main() {
    int vetor[] = {1,5,3,4,8,15,6,7};
    cout << maior_elemento(vetor, 8);
    for (int i = 0; i<8; i++) {
        cout << "\n\t" << vetor[i];
    }
}
