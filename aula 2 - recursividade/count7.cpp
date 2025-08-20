//
// Created by Ana Beatriz Astle on 20/08/25.
//
#include <iostream>

int count7Iterative(int num) {
    int count = 0;
    while (num != 0) {
        if (num%10 == 7) {
            count++;
        }
        num = num/10;
    }
    return count;
}

int count7(int num) {
    if (num == 0) {
        return 0;
    }
    else if (num%10 == 7) {
        return 1 + count7(num/10);
    }
    return count7(num/10);
}

int main() {
    int num;
    std::cout << "Type a number: ";
    std::cin >> num;
    std::cout << "The number 7 occurs " << count7(num) << " times!";
    return 0;
}