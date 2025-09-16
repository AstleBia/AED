//
// Created by Ana Beatriz Astle on 09/09/25.
//
#include <iostream>
using namespace std;

int contagem_regressiva(int n) {
    if (n < 0) {
        return 0;
    }
    cout << n << " ";
    return contagem_regressiva(n-1);
}

int main() {
    contagem_regressiva(10000);
    return 0;
}