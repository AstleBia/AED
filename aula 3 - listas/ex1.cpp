//
// Created by Ana Beatriz Astle on 25/08/25.
//

#include <iostream>

typedef struct Node {
    int value;
    Node *next;
};

Node* insert_head(Node *list, int value) {
    Node* new_node = new Node();
    new_node->value = value;
    new_node->next = list;
    return new_node;
};

Node* insert_end(Node *list, int value) {
    Node* new_node = new Node();
    new_node->value = value;
    new_node->next = nullptr;
    if (list == nullptr) {
        return new_node;
    }
    Node* temp = list;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = new_node;
    return list;
}

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
    std::cout << "\n";
    lista = insert_end(lista, 10);
    lista = insert_end(lista, 30);
    print_list(lista);
}

