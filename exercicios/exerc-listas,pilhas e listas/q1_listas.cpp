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
        No* valor_deletado = atual->prox;
        atual->prox = atual->prox->prox;
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


void exibir_lista(No* lista) {
    No* atual = lista;
    while (atual != nullptr) {
        cout << atual->valor << " -> ";
        atual = atual->prox;
    }
    cout << "NULL\n";
}

void menu() {
    cout << "-- OPERACOES --\n1 - INSERIR INICIO\n2 - INSERIR FIM\n3 - REMOVER VALOR\n4 - SAIR\n";
}

int main() {
    No* lista = nullptr;
    int opcao = 0;
    while (true) {
        int valor = 0;
        menu();
        cin >> opcao;
        if (opcao == 1) {
            cout << "Digite um valor para adicionar ao inicio: ";
            cin >> valor;
            lista = inserir_inicio(lista, valor);
            exibir_lista(lista);
        }
        else if (opcao == 2) {
            cout << "Digite um valor para adicionar ao final da lista: ";
            cin >> valor;
            lista = inserir_fim(lista,valor);
            exibir_lista(lista);
        }
        else if (opcao == 3) {
            cout << "Digite um valor para remover: ";
            cin >> valor;
            lista = remover(lista, valor);
            exibir_lista(lista);
        }
        else {
            break;
        }
    }
}
