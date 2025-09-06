//
// Created by Ana Beatriz Astle on 05/09/25.
//
#include <iostream>
using namespace std;

struct Pessoa {
    char nome[50];
    int idade;
    float altura;
};

void exibirPessoa(Pessoa pessoa) {
    cout << "Nome: " << pessoa.nome << "\nIdade: " << pessoa.idade << "\nAltura: " << pessoa.altura;
};

int main() {
    Pessoa pessoa;
    cout << "Digite o nome da pessoa: ";
    cin >> pessoa.nome;
    cout << "Digite a idade da pessoa: ";
    cin >> pessoa.idade;
    cout << "Digite a altura da pessoa: ";
    cin >> pessoa.altura;
    exibirPessoa(pessoa);
    return 0;
}

