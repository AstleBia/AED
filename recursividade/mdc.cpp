//
// Created by Ana Beatriz Astle on 19/08/25.
//

#include <iostream>
#include <string>

int mdcIterativo(int x, int y) {
    for (int i = y; i > 0; i--) {
        if (x%i == 0 && y%i==0) {
            return i;
        }
    }
    return 0;
}

int mdcRecursivo(int x, int y) {
    if (y == 0) {
        return x;
    }
    return mdcRecursivo(y, x % y);
}

void printarMdc(int x, int y) {
    std::cout << "Iterativo: " << mdcIterativo(x,y) << "\n";
    std::cout << "Recursivo: " << mdcRecursivo(x,y);
}

int main(){
    int num1,num2;
    std::cout << "Digite o primeiro numero: ";
    std::cin >> num1;
    std::cout << "Digite o segundo numero: ";
    std::cin >> num2;
    printarMdc(num1,num2);


}