// https://www.geeksforgeeks.org/doubly-linked-list/

#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *prev;
    Node *next;
};

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

void printList(Node *head)
{
    Node *last;

    while(head!=NULL)
    {
        last = head;
        cout<<head->data<<" ";
        head = head->next;
    }

    cout<<endl;

    while(last!=NULL)
    {
        cout<<last->data<<" ";
        last = last->prev;
    }
}
int main()
{
    Node *head = NULL;

    fPush(&head,5);
    fPush(&head,4);
    fPush(&head,3);
    fPush(&head,2);
    fPush(&head,1);

    printList(head);
    return 0;
}
