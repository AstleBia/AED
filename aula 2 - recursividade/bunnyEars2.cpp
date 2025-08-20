//
// Created by Ana Beatriz Astle on 20/08/25.
//

// odd bunnies have 2 ears, even bunnies have 3 ears

#include <iostream>

int bunnyEars2(int bunnies) {
    if (bunnies == 0) {
        return 0;
    }
    else if (bunnies%2 == 0) {
        return 3 + bunnyEars2(bunnies-1);
    }
    return 2 + bunnyEars2(bunnies-1);
}

int bunnyEars2Iterative(int bunnies) {
    int total = 0;
    for (int i = 0; i <= bunnies; i++) {
        if (i == 0) {

        }
        else if (i%2==0) {
            total += 3;
        }
        else {
            total += 2;
        }
    }
    return total;
}

int main() {
    int bunnies;
    std::cout << "Type the amount of bunnies: ";
    std::cin >> bunnies;
    std::cout << bunnies << " bunnies have " << bunnyEars2Iterative(bunnies) << " ears!";
}

