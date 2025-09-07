//
// Created by Ana Beatriz Astle on 07/09/25.
//
/*10. Sistema Bancário Simples
Crie uma struct chamada ContaBancaria, contendo:
• Nome do titular (string de até 50 caracteres)
• Número da conta (inteiro)
• Saldo (float)
Crie funções para:
• Depositar um valor na conta
• Sacar um valor da conta (apenas se houver saldo suficiente)
• Exibir o saldo
No main(), crie uma conta bancária e permita que o usuário realize operações.*/
#include <iostream>
using namespace std;

struct ContaBancaria {
    char titular[50];
    int numeroConta;
    float saldo;
};

void depositar(ContaBancaria *conta, float valor) {
    conta->saldo += valor;
}

void sacar(ContaBancaria *conta, float valor) {
    if (conta->saldo >= valor) {
        conta->saldo -= valor;
    }
    else {
        cout << "Saldo insuficiente.\n";
    }
}

void exibirSaldo(ContaBancaria conta) {
    cout << "Saldo atual: " << conta.saldo << "\n";
}

int main() {
    ContaBancaria conta1;
    depositar(&conta1,200);
    exibirSaldo(conta1);
    sacar(&conta1,50);
    exibirSaldo(conta1);
    depositar(&conta1, 300);
    exibirSaldo(conta1);
    sacar(&conta1,1000);
    exibirSaldo(conta1);
}