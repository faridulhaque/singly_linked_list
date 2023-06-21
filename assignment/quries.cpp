

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

void update_head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
}

void update_tail(Node *&head, Node *&tail, int v)
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

void print_me(Node *head)
{
    cout << head->value;
    cout << " ";
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    cout << temp->value << endl;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int x, v;

        cin >> x >> v;

        if (x == 0)
        {
            update_head(head, v);
        }

        else if (x == 1)
        {
            update_tail(head, tail, v);
        }

        else
        {
            cout << "wrong input";
        }

        print_me(head);
    }

    return 0;
}
