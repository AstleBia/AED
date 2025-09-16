//
// Created by Ana Beatriz Astle on 16/09/25.
//
#include <iostream>
using namespace std;

int produto(int n1, int n2) {
    int soma = 0;
    while (n2 > 0) {
        soma += n1;
        n2--;
    }
    return soma;
}

int main() {
    cout << produto(5,3);
    return 0;
}