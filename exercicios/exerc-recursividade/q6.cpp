//
// Created by Ana Beatriz Astle on 10/09/25.
//
#include <iostream>
#include <string>
using namespace std;

int palindromo(char palavra[]) {
    int tam = strlen(palavra) - 1;
    if (tam <= 1) {
        return 1;
    }
    else if (palavra[tam] != palavra[0]) {
        return 0;
    }
    return palindromo(palavra.substr(1, tam - 1));
    cout << strlen(palavra);
}

int main() {
    palindromo("ola");
    return 0;
}


