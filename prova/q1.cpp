//
// Ana Beatriz Astle e Caio Marques
//
#include <iostream>
using namespace std;

struct No {
    int numero;
    No* prox;
};

No* inserirFinal(No* lista, int numero) {
    No* novo = new No();
    novo->numero = numero;
    novo->prox = nullptr;
    if (lista == nullptr) {
        return novo;
    }
    No* temp = lista;
    while (temp->prox != nullptr) {
        temp = temp->prox;
    }
    temp->prox = novo;
    return lista;
}

void exibirLista(No* lista) {
    No* temp = lista;
    while (temp != nullptr) {
        cout << temp->numero << " -> ";
        temp = temp->prox;
    }
    cout << " NULL\n";
}


int contarPares(No* lista) {
    if (lista == nullptr) {
        return 0;
    }
    else if(lista->numero%2 == 0){
        return contarPares(lista->prox) + 1;
    }
    return contarPares(lista->prox);
}


No* removeImpares(No* lista) {
    while (lista != nullptr && lista->numero % 2 != 0) {
        No* temp = lista;
        lista = lista->prox;
        delete temp;
    }
    No* atual = lista;
    while (atual != nullptr && atual->prox != nullptr) {
        if (atual->prox->numero % 2 != 0) {
            No* temp = atual->prox;
            atual->prox = atual->prox->prox;
            delete temp;
        }
        else {
            atual = atual->prox;
        }
    }
    return lista;
}

int main() {
    No* lista = nullptr;
    lista = inserirFinal(lista, 10);
    lista = inserirFinal(lista, 3);
    lista = inserirFinal(lista, 7);
    lista = inserirFinal(lista, 8);
    lista = inserirFinal(lista, 12);
    lista = inserirFinal(lista, 15);
    lista = inserirFinal(lista, 20);
    cout << "Lista original: ";
    exibirLista(lista);
    cout << "Quantidade de pares: " << contarPares(lista) << "\n";
    lista = removeImpares(lista);
    cout << "Lista com impares removidos: ";
    exibirLista(lista);
    return 0;
}
