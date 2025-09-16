//
// Created by Ana Beatriz Astle on 16/09/25.
//

#include <iostream>
using namespace std;

void contagemRegressiva(int numero) {
    for (int i = numero; i >= 0; i--) {
        cout << i << " ";
    }
}

int main() {
    contagemRegressiva(100000);
    return 0;
}
