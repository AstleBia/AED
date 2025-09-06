//
// Created by Ana Beatriz Astle on 05/09/25.
//
#include <iostream>
using namespace std;

struct Aluno {
    char nome[50];
    int matricula;
    float nota;
};

int main() {
    Aluno alunos[5];
    float soma = 0;
    for (int i = 0; i < 5; i++) {
        cout << "Digite o nome do aluno: ";
        cin >> alunos[i].nome;
        cout << "Digite a matricula do aluno: ";
        cin >> alunos[i].matricula;
        cout << "Digite a nota do aluno: ";
        cin >> alunos[i].nota;
        soma+= alunos[i].nota;
    }
    cout << "Média: " << soma/5;
    return 0;
}