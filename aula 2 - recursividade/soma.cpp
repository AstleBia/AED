//
// Created by Ana Beatriz Astle on 19/08/25.
//
#include <iostream>

int somaInterativa(int n) {
    int total = 0;
    for (int i = 1; i <= n; i++) {
        total += i;
    }
    return total;
}

int somaRecursiva(int n) {
    if (n == 0) {
        return 0;
    }
    return n+somaRecursiva(n-1);
}

int main() {
    std::cout << "Iterativo: " << somaInterativa(300) << "\n";
    std::cout << "Recursivo: " << somaRecursiva(300);
}