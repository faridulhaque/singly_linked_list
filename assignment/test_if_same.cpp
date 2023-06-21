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

int comp_nodes(Node *head_1, Node *head_2, int c_head_1, int c_head_2)
{
    int flag = 1;

    if (c_head_1 != c_head_2)
    {
        return 0;
    }

    while (head_1 != NULL)
    {
        if (head_1->value != head_2->value)
        {
            flag = 0;
            break;
        }

        head_1 = head_1->next;
        head_2 = head_2->next;
    }

    return flag;
}

int main()
{
    Node *head_1 = NULL;
    Node *head_2 = NULL;

    int c_head_1 = 0;
    int c_head_2 = 0;

    while (true)
    {
        int v;
        cin >> v;
        c_head_1++;

        if (v == -1)
        {
            break;
        }

        insert_tail(head_1, v);
    }

    while (true)
    {
        int v;
        cin >> v;
        c_head_2++;

        if (v == -1)
        {
            break;
        }

        insert_tail(head_2, v);
    }

    int flag = comp_nodes(head_1, head_2, c_head_1, c_head_2);

    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
