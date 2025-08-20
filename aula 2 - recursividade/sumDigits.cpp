//
// Created by Ana Beatriz Astle on 20/08/25.
//

#include <iostream>

int sumDigits(int num) {
    if (num == 0) {
        return 0;
    }
    return num%10 + sumDigits(num/10);
}

int sumDigitsIterativo(int num) {
    int sum = 0;
    while (num!=0) {
        sum += num%10;
        num = num/10;
    }
    return sum;
}

int main() {
    std::cout << "Iterative sum of numbers: " << sumDigitsIterativo(345) << "\n";
    std::cout << "Recursive sum of numbers: " << sumDigits(0);
    return 0;
}