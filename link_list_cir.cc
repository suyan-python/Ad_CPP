#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }

    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "memory is free for node " << value << endl;
    }
};

void insertAt(Node *&tail, int element, int d)
{
    //! empty list
    if (tail == 0)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }

    else
    {
        //! non-empty list
        Node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }

        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(Node *tail)
{
    Node *temp = tail;

    if (tail == NULL)
    {
        cout << "List is Empty" << endl;
        return;
    }
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}

void deleteNode(Node *&tail, int value)
{

    //! empty list
    if (tail == NULL)
    {
        cout << "List is empty" << endl;
    }

    //! non-empty list
    Node *prev = tail;
    Node *curr = prev->next;

    while (curr->data != value)
    {
        prev = curr;
        curr = curr->next;
    }
    prev->next = curr->next;

    //! for single Node
    if (curr == prev)
    {
        tail = NULL;
    }

    //! for >=2 Node
    if (tail == curr)
    {
        tail = prev;
    }

    curr->next = NULL;
    delete curr;
}

int main()
{
    Node *tail = NULL;
    insertAt(tail, 1, 1);
    print(tail);

    // insertAt(tail, 1, 2);
    // print(tail);

    // insertAt(tail, 2, 3);
    // print(tail);

    // insertAt(tail, 3, 5);
    // print(tail);

    // insertAt(tail, 5, 6);
    // print(tail);

    // insertAt(tail, 3, 4);
    // print(tail);

    // deleteNode(tail, 1);
    // print(tail);

    deleteNode(tail, 1);
    print(tail);
}