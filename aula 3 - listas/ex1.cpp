//
// Created by Ana Beatriz Astle on 25/08/25.
//

#include <iostream>

typedef struct Node {
    int value;
    Node *next;
};

Node* insert_head(Node *list, int valor) {
    Node *new_node = new Node();
    new_node->value = valor;
    new_node->next = list;
    return new_node;
};

void print_list(Node *list) {
    do {
        std::cout << list->value << " -> ";
        list = list->next;
    }while (list->next != nullptr);
    std::cout << list->value;
    std::cout <<" -> null";
}

int main() {
    Node* lista = nullptr;
    lista = insert_head(lista, 1);
    lista = insert_head(lista, 2);
    lista = insert_head(lista, 3);
    lista = insert_head(lista, 4);
    lista = insert_head(lista, 5);
    print_list(lista);
}

