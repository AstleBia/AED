//
// Created by Ana Beatriz Astle on 20/08/25.
//

//funcao retorna o total de blocos do triangulo dado o numero de linhas (1ra linha = 1 bloco; 2nda linhas = 2 blocos ...)

#include <iostream>

int triangle(int row) {
    if (row == 0) {
        return 0;
    }
    return row + triangle(row-1);
}

int main() {
    int rows;
    std::cout << "Type the number of rows: ";
    std::cin >> rows;
    std::cout << "A triangle with " << rows << " rows has " << triangle(rows) << " blocks!";
}
