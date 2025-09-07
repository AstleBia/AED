//
// Created by Ana Beatriz Astle on 06/09/25.
//
#include <iostream>
#include <cstring>
using namespace std;

struct Contato {
    char nome[50];
    char telefone[15];
};

void adicionarContato(Contato* listaTelefonica, int *totalContatos, Contato novoContato) {
    if (*totalContatos < 15) {
        listaTelefonica[*totalContatos] = novoContato;
        *totalContatos += 1;
    }
    else {
        cout << "Lista cheia!";
    }
}

void buscarContato(char *nome, Contato* listaTelefonica) {
    for (int i = 0; i<15;i++) {
        if (strcmp(listaTelefonica[i].nome, nome) == 0) {
            cout << "Contato Encontrado!\nNome: " << listaTelefonica[i].nome << "\nTelefone: " << listaTelefonica[i].telefone << "\n\n";
            return;
        }
    }
    cout << "Contato não encontrado!";
}

int main() {
    Contato* listaTelefonica = new Contato[15];
    int totalContatos = 0;
    while (true) {
        int resposta = 0;
        cout << "LISTA TELEFONICA\n1- Adicionar Contato\n2-Buscar Contato\n3-Sair\n\nDigite uma opcao: ";
        cin >> resposta;
        if (resposta == 1) {
            Contato novoContato;
            cout << "Digite o nome do novo contato: \n";
            cin >> novoContato.nome;
            cout << "Digite o telefone do contato: \n";
            cin >> novoContato.telefone;
            adicionarContato(listaTelefonica, &totalContatos, novoContato);
        }
        else if (resposta == 2) {
            char contatoBusca[50];
            cout << "Digite o nome do contato que deseja buscar: ";
            cin >> contatoBusca;
            buscarContato(contatoBusca, listaTelefonica);
        }
        else if (resposta == 3) {
            cout << "Saindo...";
            break;
        }
        else {
            cout << "Numero invalido!";
        }
    }
    return 0;
}