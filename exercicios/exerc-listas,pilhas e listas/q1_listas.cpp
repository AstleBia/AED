//
// Created by Ana Beatriz Astle on 16/09/25.
//
#include <iostream>
using namespace std;

struct No {
    int valor;
    No* prox;
};

No* inserir_inicio(No* lista, int valor) {
    No* novo = new No();
    novo->valor = valor;
    novo->prox = lista;
    return novo;
}

No* inserir_ordenado(No* lista, int valor) {
    No* atual = lista;
    No* novo = new No();
    novo->valor = valor;
    if (lista == nullptr || atual->valor <= novo->valor) {
        novo->prox = atual;
        return novo;
    }
    if (atual->valor > novo->valor) {
        while (atual->prox != nullptr && atual->prox->valor > novo->valor) {
            atual = atual->prox;
        }
    }
    novo->prox = atual->prox;
    atual->prox = novo;
    return lista;
}

No* inserir_fim(No* lista, int valor) {
    No* atual = lista;
    No* novo = new No();
    novo->valor = valor;
    novo->prox = nullptr;
    if (lista == nullptr) {
        return novo;
    }
    while (atual->prox != nullptr) {
        atual = atual->prox;
    }
    atual->prox= novo;
    return lista;
}

No* remover(No* lista, int valor) {
    No* atual = lista;
    if (atual == nullptr) {
        return lista;
    }
    if (atual->valor == valor) {
        No* valor_deletado = atual;
        lista = atual->prox;
        delete valor_deletado;
        return lista;
    }
    while (atual->prox->valor != valor) {
        atual = atual->prox;
    }
    No* valor_deletado = atual->prox;
    atual->prox = atual->prox->prox;
    delete valor_deletado;
    return lista;
}

int contador(No* lista) {
    int contador = 0;
    No* atual = lista;
    while (atual != nullptr) {
        contador += 1;
        atual = atual->prox;
    }
    return contador;
}

void exibir_lista(No* lista) {
    No* atual = lista;
    while (atual != nullptr) {
        cout << atual->valor << " -> ";
        atual = atual->prox;
    }
    cout << "NULL\n";
}


int main() {
    No* lista = nullptr;
    lista = inserir_ordenado(lista, 5);
    lista = inserir_ordenado(lista, 4);
    lista = inserir_ordenado(lista, 6);
    lista = inserir_ordenado(lista, 2);
    lista = inserir_ordenado(lista, 3);
    exibir_lista(lista);
    cout<<contador(lista)<<" nós na lista!";
    delete lista;
}

/*
 *5
 *5 -> 4
 *6 -> 5 -> 4
 *6 -> 5 -> 4 -> 2
 *6 -> 5 ->4 -> 3 -> 2
 */
