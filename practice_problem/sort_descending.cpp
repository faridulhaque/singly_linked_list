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

void sort_des(Node *head)
{

    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->value < j->value)
            {
                swap(i->value, j->value);
            }
        }
    }
}

void print_list(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }

    cout << endl;
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

    sort_des(head);

    print_list(head);

    return 0;
}