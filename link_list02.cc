// #include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
};

void print(Node *n)
{
    while (n != NULL)
    {
        cout << n->value << " ";
        n = n->next;
    }
    cout << endl;
}

void insertAtHead(Node *&head, int newValue)
{
    Node *newNode = new Node();
    newNode->value = newValue;
    newNode->next = head;
    head = newNode;
}

int main()
{
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();

    head->value = 1;
    head->next = second;

    second->value = 2;
    second->next = third;

    third->value = 3;
    third->next = NULL;

    insertAtHead(head, 0);
    print(head);
}
