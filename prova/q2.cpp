//
// Created by Ana Beatriz Astle on 29/09/25.
//
#include <iostream>
using namespace std;

struct No {
    int valor;
    No* prox;
};

No* inserirInico(No* lista, int valor) {
    No* novo = new No();
    novo->valor = valor;
    if (lista == nullptr) {
        novo->prox = nullptr;
        return novo;
    }
    novo->prox = lista;
    return novo;
}

void exibirLista(No* lista) {
    No* temp = lista;
    while (temp != nullptr) {
        cout << temp->valor << " -> ";
        temp = temp->prox;
    }
    cout << " NULL\n";
}

int somaElementos(No* lista) {
    if (lista == nullptr) {
        return 0;
    }
    return somaElementos(lista->prox) + lista->valor;
}

int main() {
    No* lista = nullptr;
    lista = inserirInico(lista, 10);
    lista = inserirInico(lista, 5);
    lista = inserirInico(lista, 8);
    lista = inserirInico(lista, 20);
    lista = inserirInico(lista, 15);
    exibirLista(lista);
    cout << "Soma dos elementos da lista: " << somaElementos(lista);
    delete lista;
    return 0;
}