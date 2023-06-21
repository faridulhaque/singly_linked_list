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

void sort_me(Node *head)
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

// int
// count_nodes (Node * head)
// {
//   Node *temp = head;

//   int count = 0;

//   while (temp != NULL)
//     {
//       count++;
//       temp = temp->next;
//     }

//     return count;
// }

void print_mid(int head_count, Node *head)
{

    //   cout << head_count << endl;

    if (head_count == 1)
    {
        cout << head->value;
    }

    else
    {

        int mid_pos;

        Node *temp = head;

        if (head_count % 2 == 0)
        {
            mid_pos = head_count / 2;

            for (int i = 1; i <= mid_pos; i++)
            {

                if (i == mid_pos)
                {

                    cout << temp->value << " " << temp->next->value;
                }
                temp = temp->next;
            }
        }
        else
        {
            mid_pos = (head_count / 2 + 1);

            for (int i = 1; i <= mid_pos; i++)
            {

                if (i == mid_pos)
                {
                    cout << temp->value << " ";
                }
                temp = temp->next;
            }
        }
    }
}

// void print_nodes(Node* head) {
//     Node* temp = head;

//     while (temp != NULL) {
//         cout << temp->value << " ";
//         temp = temp->next;
//     }
// }

int main()
{
    Node *head;
    int head_count = -1;

    while (true)
    {
        int v;
        cin >> v;
        head_count++;

        if (v == -1)
        {
            break;
        }

        insert_tail(head, v);
    }

    sort_me(head);
    //   int head_count = count_nodes (head);
    //  print_nodes(head);
    print_mid(head_count, head);

    return 0;
}
