//
// Created by Ana Beatriz Astle on 18/08/25.
//

#include <stdio.h>

typedef struct{
    int dia;
    int ano;
    char mes[10];
}Data;

typedef struct Funcionario{
    char nome[100];
    int idade;
    float salario;
    Data dataNascimento;
}Func;

void printarFuncionario(Func funcionario) {
    printf("Nome: %s\nIdade: %d\nSalario: %f\nData de nascimento: %d/%s/%d\n\n", funcionario.nome, funcionario.idade, funcionario.salario, funcionario.dataNascimento.dia, funcionario.dataNascimento.mes, funcionario.dataNascimento.ano);
}

int main(){
    Func funcionarios[3];
    for (int x = 0; x < 3; x++) {
        printf("Digite o nome do funcionario %d: ", x+1);
        scanf("%s", funcionarios[x].nome);
        printf("Digite a idade do funcionario %d: ", x+1);
        scanf("%d", &funcionarios[x].idade);
        printf("Digite o salario do funcionario %d: ", x+1);
        scanf("%f", &funcionarios[x].salario);
        printf("Digite o dia de nascimento do funcionario %d: ", x+1);
        scanf("%d", &funcionarios[x].dataNascimento.dia);
        printf("Digite o ano de nascimento do funcionario %d: ", x+1);
        scanf("%d", &funcionarios[x].dataNascimento.ano);
        printf("Digite o mes de nascimento do funcionario %d: ", x+1);
        scanf("%s", &funcionarios[x].dataNascimento.mes);
    }
    for (int x = 0; x < 3; x++) {
        printarFuncionario(funcionarios[x]);
    }
    return 0;
}



