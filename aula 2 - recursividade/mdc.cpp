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

int mdcRecursivo() {

}

void printarMdc(int resultado) {
    std::cout << "O mdc eh: " << resultado;
}

int main(){
    int num1,num2;
    std::cout << "Digite o primeiro numero: ";
    std::cin >> num1;
    std::cout << "Digite o segundo numero: ";
    std::cin >> num2;
    printarMdc(mdcIterativo(num1,num2));

}