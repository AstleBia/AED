//
// Created by Ana Beatriz Astle on 05/09/25.
//
#include <iostream>
#include <string.h>
using namespace std;

struct Carro {
    char modelo[30];
    int ano;
    float preco;
};

void exibirCarro(Carro *carro) {
    cout << "Modelo: " << carro->modelo << "\nAno: " << carro->ano << "\nPreço: " << carro->preco;
}

int main() {
    Carro* carro = new Carro();
    strcpy(carro->modelo, "Honda Civic");
    carro->ano = 2022;
    carro->preco = 10000.40;
    exibirCarro(carro);
    delete carro;
    return 0;
}