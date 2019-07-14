// https://www.geeksforgeeks.org/reverse-a-linked-list/


#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

void ReverseLL(Node **head)
{
    if(*head==NULL)
    {
        return;
    }

    Node *prev = NULL;
    Node *curr = *head;
    Node *next = NULL;

    while(curr!=NULL)
    {
        next = curr->next;
        curr->next  = prev;

        prev = curr;
        curr = next;
    }

    *head = prev;
}

void printList(Node *head)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}

void frontPush(Node **head, int newdata)
{
    Node *newnode = new Node;
    newnode->data = newdata;
    newnode->next = *head;
    *head = newnode;
}

int main()
{
    Node *head = NULL;


    frontPush(&head, 20);
    frontPush(&head, 4);
    frontPush(&head, 15);
    frontPush(&head, 85);

    ReverseLL(&head);

    printList(head);


    return 0;
}

// Time Complexity = O(n)
// Space Complexity = O(1)
