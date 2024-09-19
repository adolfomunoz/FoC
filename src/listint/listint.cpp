#include "listint.h"
ListInt create() {
    ListInt li;
    li.first = nullptr;
    return li;
}
void push(ListInt& li, int value) {
    Node* new_node = new Node;
    new_node->next = li.first;
    new_node->data = value;
    li.first = new_node;
}
int add_all(const ListInt& li) {
    int sol = 0;
    Node* node = li.first;
    while (node != nullptr) {
        sol += node->data;
        node = node -> next;
    }
    return sol;
}
void free_node(Node* node) {
    if (node->next != nullptr) { 
        free_node(node->next);
        delete node->next;
    }
}

void free(ListInt& li) {
    if (li.first != nullptr) { 
        free_node(li.first);
        delete li.first;
    }
}
