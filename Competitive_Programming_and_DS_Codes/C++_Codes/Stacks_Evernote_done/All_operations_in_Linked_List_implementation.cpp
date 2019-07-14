#include <iostream>
#include <stdlib.h>
#include <limits.h>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

void push(Node **head, int data)
{
    Node *node = new Node;
    node->data = data;
    node->next = NULL;

    node->next = *head;
    *head = node;
    cout << data << " pushed to stack" << endl;
}

int pop(Node **head)
{
    if (*head == NULL)
    {
        cout << "The number of elements in the stack are ";
        return 0;
    }
    Node *temp = *head;
    *head = (*head)->next;
    int popped_item = temp->data;

    free(temp);
    return popped_item;
}

void showStack(Node *head)
{
    cout << endl;
    cout << "The stack looks like" << endl;
    while (head != NULL)
    {
        cout << head->data << endl;
        head = head->next;
    }
}

int main()
{
    Node *head = NULL;

    cout << pop(&head) << endl;

    push(&head, 1);
    push(&head, 2);
    push(&head, 3);

    showStack(head);

    cout << endl;

    cout << pop(&head) << " has been removed from the stack" << endl;

    showStack(head);

    return 0;
}
