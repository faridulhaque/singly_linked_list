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

void insert_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}

int findMax(Node *head)
{

    Node *temp = head;
    Node *max = head;

    while (temp->next != NULL)
    {

        temp = temp->next;
        if (temp->value > max->value)
        {
            max = temp;
        }
        else
        {
            continue;
        }
    }

    return max->value;
}

int findMin(Node *head)
{

    Node *temp = head;
    Node *min = head;

    while (temp->next != NULL)
    {

        temp = temp->next;

        if (temp->value < min->value)
        {
            min = temp;
        }
        else
        {
            continue;
        }
    }

    return min->value;
}

int main()
{

    Node *head = NULL;

    while (true)
    {
        int v;
        cin >> v;

        if (v == -1)
        {
            break;
        }

        insert_tail(head, v);
    }

    int max = findMax(head);
    int min = findMin(head);

    cout << max << " " << min;

    return 0;
}
