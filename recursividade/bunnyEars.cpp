//
// Created by Ana Beatriz Astle on 20/08/25.
//
#include <iostream>

int bunnyEars(int bunnies) {
    if (bunnies == 0) {
        return 0;
    }
    return 2 + bunnyEars(bunnies - 1);
}

int main() {
    int bunnies;
    std::cout << "Digite a quantidade de coelhos: ";
    std::cin >> bunnies;
    std::cout << bunnies << " coelhos tem " << bunnyEars(bunnies) << " orelhas";
}

