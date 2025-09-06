//
// Created by Ana Beatriz Astle on 05/09/25.
//
#include <iostream>
using namespace std;

struct Funcionario {
    char nome[50];
    char cargo[30];
    float salario;
};

void inserirFuncionario(int n, Funcionario funcionarios[]) {
    for (int i = 0; i<n; i++) {
        cout << "Digite o nome do funcionario " << i+1 << ": ";
        cin >> funcionarios[i].nome;
        cout << "Digite o cargo do funcionario " << i+1 <<": ";
        cin >> funcionarios[i].cargo;
        cout << "Digite o salario do funcionario " << i+1 << ": ";
        cin >> funcionarios[i].salario;
    }
}

void exibirFuncionarios(int n, Funcionario funcionarios[]) {
    for (int i = 0; i < n; i++) {
        cout << "\nFuncionario " << i+1 << "\nNome: " << funcionarios[i].nome << "\nCargo: " << funcionarios[i].cargo << "\nSalario: " << funcionarios[i].salario;
    }
}

int main() {
    int n;
    cout << "Digite o valor de n: ";
    cin >> n;
    Funcionario* funcionarios = new Funcionario[n];
    inserirFuncionario(n, funcionarios);
    exibirFuncionarios(n, funcionarios);
    delete funcionarios;
    return 0;
}
