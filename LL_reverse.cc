// #include <iostream>
#include <bits/stdc++.h>
#define class struct
using namespace std;

class Node
{
    // public:
    int data;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

// void print(Node *head)
// {
//     while (head != NULL)
//     {
//         cout << head->data << " ";
//         head = head->next;
//     }
//     cout << endl;
// }

void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node *reverseLink(Node *head)
{
    //! iteration method
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *prev = NULL;
    Node *curr = head;
    Node *forward = NULL;

    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}

Node *reverse(Node *head)
{
    //! recursive method
    //?base case
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *head2 = reverse(head->next);
    head->next->next = head;
    head->next = NULL;

    return head2;
}

//! input = 1,2,3,4
//! output = 4,3,2,1
// int main()
// {
//     Node *head = new Node(5);
//     Node *second = new Node(5);
//     Node *thrid = new Node(5);

//     head->data = 1;
//     head->next = second;

//     second->data = 2;
//     second->next = thrid;

//     thrid->data = 3;
//     thrid->next = NULL;

//     print(head);

//     reverseLink(head);
//     print(head);
// }
