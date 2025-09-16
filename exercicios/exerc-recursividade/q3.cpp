//
// Created by Ana Beatriz Astle on 09/09/25.
//
#include <iostream>
using namespace std;

int soma_digitos(int n) {
    if (n/10 == 0) {
        return n%10;
    }
    return soma_digitos(n/10) + n%10;
}

int main() {
    cout << soma_digitos(1234);
    return 0;
}
