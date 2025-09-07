//
// Created by Ana Beatriz Astle on 07/09/25.
//
#include <iostream>
using namespace std;

struct Retangulo {
    float base;
    float altura;
};

float area(Retangulo retangulo) {
    return retangulo.base * retangulo.altura;
}

float perimetro(Retangulo retangulo) {
    return 2*retangulo.base + 2*retangulo.altura;
}

int main() {
    Retangulo retangulo;
    retangulo.base = 10;
    retangulo.altura = 2;
    cout << "Base: " << area(retangulo) << "\nPerimetro: " << perimetro(retangulo);
    return 0;
}