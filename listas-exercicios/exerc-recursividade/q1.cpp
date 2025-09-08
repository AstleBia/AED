//
// Created by Ana Beatriz Astle on 08/09/25.
//
#include <iostream>
using namespace std;

int contaNumero(int numero) {
    int contador = 0;
    do {
        numero = numero/10;
        contador++;
    }while (numero != 0);
    return contador;
}

int contaNumeroR(int numero) {
    if (numero == 0) {
        return 0;
    }
    return contaNumero(numero/10) + 1;
}

int main() {
    cout << contaNumero(12345678) << "\n";
    cout << contaNumeroR(12345678);
}