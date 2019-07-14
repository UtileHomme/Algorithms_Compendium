// https://www.geeksforgeeks.org/doubly-linked-list/


#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *prev;
    Node *next;
};

void printList(Node *head)
{
    Node *temp = head;

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

void fPush(Node **head, int newdata)
{
    Node *newnode = new Node;

    newnode->data = newdata;
    newnode->next = *head;
    newnode->prev = NULL;

    if(*head!=NULL)
    {
        (*head)->prev = newnode;
    }

    *head = newnode;
}

void InsertAfterNode(Node *prev_node, int newdata)
{
    Node *newnode = new Node;

    newnode->data = newdata;

    newnode->next = prev_node->next;

    newnode->prev = prev_node;

    prev_node->next = newnode;

    if(newnode->next!=NULL)
    {
        newnode->next->prev = newnode;
    }
}
void InsertAtEnd(Node **head, int newdata)
{
    Node *last = *head;

    Node *newnode = new Node;

    newnode->data = newdata;
    newnode->next = NULL;

    if(*head==NULL)
    {
        newnode->prev = NULL;
        *head = newnode;

        return;
    }

    while(last->next!=NULL)
    {
        last = last->next;
    }

    newnode->prev = last;

    last->next = newnode;
}

int main()
{
    Node *head = NULL;

    InsertAtEnd(&head, 1);
    InsertAtEnd(&head, 2);
    InsertAtEnd(&head, 3);
    InsertAtEnd(&head, 4);
    InsertAtEnd(&head, 5);

    printList(head);
    return 0;
}
