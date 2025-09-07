//
// Created by Ana Beatriz Astle on 06/09/25.
//
#include <iostream>
using namespace std;

struct Livro {
    char titulo[50];
    char autor[50];
    int ano;
};

void exibirLivros(int ano, Livro* livros, int tamanho) {
    cout << "Livros publicados após " << ano << ":\n";
    for (int i = 0; i < tamanho; i++) {
        if (livros[i].ano >= ano) {
            cout << "Título: " << livros[i].titulo << "\nAutor: " << livros[i].autor << "\nAno: " << livros[i].ano << "\n\n";
        }
    }
}

int main() {
    int tamanho = 3;
    Livro* livros = new Livro[tamanho];
    strcpy(livros[0].titulo, "agua");
    strcpy(livros[0].autor, "homem da agua");
    livros[0].ano = 2001;
    strcpy(livros[1].titulo, "vento");
    strcpy(livros[1].autor, "homem do vento");
    livros[1].ano = 2003;
    strcpy(livros[2].titulo, "ar");
    strcpy(livros[2].autor, "homem do ar");
    livros[2].ano = 2005;
    exibirLivros(2004, livros, tamanho);
    delete livros;
    return 0;
}