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

void insert_tail(Node *&head, int value)
{
    Node *newNode = new Node(value);
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

void delete_pos(Node *&head, int pos)

{

    if (pos == 0)
    {
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        return;
    }

    Node *temp = head;

    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;

    delete deleteNode;
}

int main()
{
    Node *head = NULL;

    while (true)
    {
        int value;
        cin >> value;
        if (value == -1)
            break;
        insert_tail(head, value);
    }
    print_list(head);
    cout << endl;
    int pos;
    cin >> pos;
    delete_pos(head, pos);

    print_list(head);

    return 0;
}