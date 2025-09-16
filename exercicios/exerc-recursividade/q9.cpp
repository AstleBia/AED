//
// Created by Ana Beatriz Astle on 16/09/25.
//
#include <iostream>
using namespace std;

int soma_digitos(int num) {
    int soma = 0;
    while (num/10 != 0) {
        soma += num%10;
        num = num/10;
    }
    soma += num%10;
    return soma;
}

int main() {
    cout << soma_digitos(80402);
    return 0;
}