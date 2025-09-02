#include <iostream>
#include <stdlib.h>

using namespace std;

typedef struct No {
    int dado;
    struct No* prox;
} No;

No* removerInicio(No* lista) {
    if (lista->prox == nullptr) {
        return nullptr;
    }
    lista = lista->prox;
    return lista;
}

No* inserirInicio(No* lista, int valor) {
    No* novo = new No();
    novo->dado = valor;
    novo->prox = lista;
    return novo;
}

No* inserirFim(No* lista, int valor) {
    No* novo = new No();
    novo->dado = valor;
    novo->prox = NULL;
    if (!lista) 
        return novo;
    
    No* temp = lista;
    while (temp->prox) 
        temp = temp->prox;
    temp->prox = novo;
    return lista;
}

No* inserirOrdenado(No* lista, int valor, int procurar) {
    No* novo = new No();
    novo->dado = valor;
    if (lista == nullptr) {
        novo->prox = nullptr;
        return novo;
    }
    No* temp = lista;
    No* temp2 = lista;
    while (temp->dado != procurar) {
        temp = temp->prox;
    }
    while (temp2->prox != temp) {
        temp2 = temp2->prox;
    }
    temp2->prox = novo;
    novo->prox = temp;
    return lista;
}

void imprimirLista(No* lista) {
    No* temp = lista;
    while (temp) {
        cout << temp->dado << " -> ";
        temp = temp->prox;
    }
    cout << "NULL \n";
}

int main() {
    No* lista = NULL;
    lista = inserirInicio(lista, 10);
    lista = inserirInicio(lista, 20);
    lista = inserirInicio(lista, 30);
    lista = inserirFim(lista, 40);
    lista = inserirFim(lista, 50);
    lista = inserirInicio(lista, 60);
    lista = inserirOrdenado(lista, 70, 50);
    lista = removerInicio(lista);
    imprimirLista(lista);
    delete lista;
    return 0;
}
