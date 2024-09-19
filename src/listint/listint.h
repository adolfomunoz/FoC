#pragma once
struct Node {
    int data;
    Node* next;
};
struct ListInt {
    Node* first;
};
ListInt create();
void push(ListInt& li, int value);
int add_all(const ListInt& li);
void free(ListInt& li);
