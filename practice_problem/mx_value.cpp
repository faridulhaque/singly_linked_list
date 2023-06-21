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

int find_max(Node *head)
{
    Node *temp = head;
    int max = temp->value;

    while (temp != NULL)
    {
        if (max < temp->value)
        {
            max = temp->value;
        }

        temp = temp->next;
    }

    return max;
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

    int mx = find_max(head);

    cout << mx << endl;

    return 0;
}