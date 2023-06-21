#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

void insert_tail(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;

        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void print_reverse(Node *n)
{

    if (n == NULL)
        return;
    print_reverse(n->next);
    cout << n->value << " ";
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
        {
            break;
        }
        insert_tail(head, tail, v);
    }

    print_reverse(head);

    return 0;
}