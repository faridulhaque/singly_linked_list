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

void insert_tail(Node* &head, Node* &tail, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

int comp(Node *head_1, Node *head_2, int count_1, int count_2)
{
    if (count_1 != count_2)
        return 0;

    int flag = 1;

    Node *temp_1 = head_1;
    Node *temp_2 = head_2;

    while (temp_1 != NULL)
    {
        if (temp_1->value != temp_2->value)
        {
            flag = 0;
            break;
        }

        temp_1 = temp_1->next;
        temp_2 = temp_2->next;
    }

    return flag;
}

int main()
{
    Node *head_1 = NULL;
    Node *tail_1 = NULL;
    int count_1 = 0;

    Node *head_2 = NULL;
    Node *tail_2 = NULL;
    int count_2 = 0;

    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
        {
            break;
        }
        count_1++;
        insert_tail(tail_1, head_1, v);
    }

    while (true)
    {
        int v;
        cin >> v;
        if (v == -1)
        {
            break;
        }
        count_2++;
        insert_tail(tail_2, head_2, v);
    }

    int flag = comp(head_1, head_2, count_1, count_2);

    if (flag)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";

    }

    return 0;
}