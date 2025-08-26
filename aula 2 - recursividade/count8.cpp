//
// Created by Ana Beatriz Astle on 20/08/25.
//
//contar os 8 mas se dois 8 tiverem seguidos contar +1

#include <iostream>

int count8Iterative(int num) {
    int counter = 0;
    while (num != 0) {
        if (num%10 == 8) {
            counter++;
            num = num/10;
            while(num%10 == 8) {
                counter += 2;
                num = num/10;
            }
        }
        else {
            num = num/10;
        }
    }
    return counter;
}

int count8(int num) {
    if (num == 0) {
        return 0;
    }
    else if (num%10 == 8) {
œ
    }


}

int main() {
    int num;
    std::cout << "Type a number: ";
    std::cin >> num;
    std::cout << "The number 8 occurs " << count8Iterative(num) << " times!";

}