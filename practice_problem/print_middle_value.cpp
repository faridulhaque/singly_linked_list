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
    }

    tail->next = newNode;
    tail = newNode;
}

void find_mid_even(Node *head, int n)
{

    Node *temp = head;
    for (int i = 1; i <= n; i++)
    {
        if (i == n)
        {
            cout << temp->value << " " << temp->next->value;
        }
        temp = temp->next;
    }
}

void find_mid_odd(Node *head, int n)
{

    Node *temp = head;
    for (int i = 1; i <= n; i++)
    {
        if (i == n)
        {
            cout << temp->value << " ";
        }
        temp = temp->next;
    }
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    int sz = 0;

    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
        {
            break;
        }
        sz++;
        insert_tail(head, tail, v);
    }

    if (sz % 2 == 0)
    {
        find_mid_even(head, sz / 2);
    }

    else
    {
        find_mid_odd(head, (sz / 2) + 1);
    }

    return 0;
}