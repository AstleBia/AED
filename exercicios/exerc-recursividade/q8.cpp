//
// Created by Ana Beatriz Astle on 16/09/25.
//
#include <iostream>
using namespace std;

int maior_elemento(int* vet, int n) {
    int maior_numero = 0;
    for (int i = 0; i < n; i++) {
        if (vet[i] > maior_numero) {
            maior_numero = vet[i];
        }
    }
    return maior_numero;
}

int main() {
    int vetor[] = {1,2,3,4,10,16,7,8};
    cout << maior_elemento(vetor, 8);
}