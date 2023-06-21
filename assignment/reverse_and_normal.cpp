#include <iostream>
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

void print_reverse(Node *head)
{

    if (head == NULL)
    {

        return;
    }

    cout << head->value << " ";

    print_reverse(head->next);
}

void print_nodes(Node *head)
{

    if (head == NULL)
    {

        return;
    }

    print_nodes(head->next);

    cout << head->value << " ";
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

    print_nodes(head);

    cout << endl;

    print_reverse(head);

    return 0;
}
