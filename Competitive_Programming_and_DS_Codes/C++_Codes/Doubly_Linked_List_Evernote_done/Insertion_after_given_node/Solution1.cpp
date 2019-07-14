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

int main()
{
    Node *head = NULL;

    fPush(&head, 5);
    InsertAfterNode(head,4);
    InsertAfterNode(head,3);
    InsertAfterNode(head,2);
    InsertAfterNode(head,1);

    printList(head);
    return 0;
}
