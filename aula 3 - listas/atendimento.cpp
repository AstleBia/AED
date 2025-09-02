//
// Created by Ana Beatriz Astle on 01/09/25.
//

#include <iostream>
#include <string.h>
using namespace std;

struct No {
    char nome[50];
    No* prox;
};

struct Fila {
    No* inicio;
    No* fim;
};

void adicionarPessoa(Fila* fila, char nome[]) {
    No* novo = new No();
    strcpy(novo->nome, nome);
    novo->prox = nullptr;
    if (fila->fim == nullptr) {
        fila->fim = fila->inicio = novo;
        return;
    }
    fila->fim->prox = novo;
    fila->fim = novo;
}

void removerPessoa(Fila* fila) {
    if (fila->inicio->prox == nullptr) {
        fila->inicio = fila->fim = nullptr;
        return;
    }
    No* temp = fila->inicio;
    fila->inicio = fila->inicio->prox;
    delete temp;
}

void printarFila(Fila* fila) {
    No* temp = fila->inicio;
    while (temp != nullptr) {
        cout << temp->nome << " <- ";
        temp = temp->prox;
    }
    cout << "NULL";
}

int main() {
    Fila* fila = new Fila();
    fila->inicio = fila->fim = nullptr;
    adicionarPessoa(fila, "bia");
    adicionarPessoa(fila, "joao");
    adicionarPessoa(fila, "mark");
    printarFila(fila);
    cout << "\n";
    removerPessoa(fila);
    adicionarPessoa(fila, "regina");
    printarFila(fila);
    return 0;
}