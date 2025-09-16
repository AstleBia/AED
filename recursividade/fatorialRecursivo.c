//
// Created by Ana Beatriz Astle on 18/08/25.
//

#include <stdio.h>

int fatorial(int n) {
    if (n == 0) {
        return 1;
    }
    else {
        return n * fatorial(n-1);
    }
}

int main() {
    int num = 10;
    printf("O fatorial de %d eh %d", num, fatorial(num));
    return 0;
}