//
// Created by Ana Beatriz Astle on 09/09/25.
//
#include <iostream>
using namespace std;

int produto(int n1, int n2) {
    if (n2 == 1) {
        return n1;
    }
    return produto(n1, n2-1) + n1;
}

int main() {
    cout << produto(5,4);
    return 0;
}