//
// Created by Ana Beatriz Astle on 07/09/25.
//
#include <iostream>
using namespace std;

struct Paciente {
    char nome[50];
    int idade;
    char diagnostico[100];
};

void exibirPacientes(Paciente* pacientes) {
    for (int i = 0; i<5; i++) {
        if (pacientes[i].idade > 60) {
            cout << "\nNome do paciente: " << pacientes[i].nome << "\nIdade: " << pacientes[i].idade << "\nDiagnostico: " << pacientes[i].diagnostico << "\n";
        }
    }
}

int main() {
    Paciente* pacientes = new Paciente[5];
    for (int i = 0; i<5; i++) {
        Paciente novo_paciente;
        cout << "\nDigite o nome: ";
        cin >> novo_paciente.nome;
        cout << "\nDigite a idade: ";
        cin >> novo_paciente.idade;
        cout << "\nDigite o diagnostico: ";
        cin >> novo_paciente.diagnostico;
        pacientes[i] = novo_paciente;
    }
    exibirPacientes(pacientes);
}