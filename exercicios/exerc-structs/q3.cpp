//
// Created by Ana Beatriz Astle on 05/09/25.
//
#include <iostream>
using namespace std;

struct Produto {
    char nome[30];
    int codigo;
    float preco;
};

void exibirProduto(Produto produto) {
    cout << "Nome: " << produto.nome << "\nCodigo: " << produto.codigo << "\nPreco: " << produto.preco;
}

int main() {
    Produto produto;
    cout << "Digite o nome: ";
    cin >> produto.nome;
    cout << "Digite o codigo: ";
    cin >> produto.codigo;
    cout << "Digite o preco: ";
    cin >> produto.preco;
    exibirProduto(produto);
    return 0;
}