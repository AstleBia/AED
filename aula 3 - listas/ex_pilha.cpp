//
// Created by Ana Beatriz Astle on 27/08/25.
//
#include <iostream>
#include <cstring>

struct Pilha {
    char letra;
    Pilha* prox;
};

Pilha* inserir_palavra(char* palavra, Pilha* pilha) {
    for (int i = 0; i < strlen(palavra); i++) {
        Pilha* no = new Pilha();
        no->letra = palavra[i];
        no->prox = pilha;
        pilha = no;
    }
    return pilha;
}

void printar_pilha(Pilha* pilha) {
    while (pilha->prox != nullptr) {
        std::cout << pilha->letra;
        pilha = pilha->prox;
    }
    std::cout << pilha->letra;
}

int main() {
    Pilha* pilha = nullptr;
    char* palavra = "caderno";
    pilha = inserir_palavra(palavra, pilha);
    printar_pilha(pilha);
}
