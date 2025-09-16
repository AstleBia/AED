//
// Ana Beatriz e Caio Marques
//
#include <iostream>
using namespace std;

struct Node {
    int valor;
    Node* esquerda;
    Node* direita;
};

Node* newNode(int valor) {
    Node* node = new Node();
    node->valor = valor;
    node->esquerda = node->direita = nullptr;
    return node;
}

Node* inserirNo(Node* raiz, int valor) {
    if (raiz == nullptr) {
        return newNode(valor);
    }
    if (valor < raiz->valor) {
        raiz->esquerda = inserirNo(raiz->esquerda, valor);
    }
    else if (valor > raiz->valor) {
        raiz->direita = inserirNo(raiz->direita, valor);
    }
    return raiz;
}

void preOrdem(Node* raiz) {
    if (raiz != nullptr) {
        cout << raiz->valor << " ";
        preOrdem(raiz->esquerda);
        preOrdem(raiz->direita);
    }
}

void emOrdem(Node* raiz) {
    if (raiz != nullptr) {
        emOrdem(raiz->esquerda);
        cout << raiz->valor << " ";
        emOrdem(raiz->direita);
    }
}

void posOrdem(Node* raiz) {
    if (raiz != nullptr) {
        emOrdem(raiz->esquerda);
        emOrdem(raiz->direita);
        cout << raiz->valor << " ";
    }
}

int main() {
    Node* arvore = nullptr;
    arvore = inserirNo(arvore,15);
    arvore = inserirNo(arvore,10);
    arvore = inserirNo(arvore,50);
    arvore = inserirNo(arvore,20);
    preOrdem(arvore);
    cout << "\n";
    emOrdem(arvore);
    cout << "\n";
    posOrdem(arvore);
    return 0;
}
