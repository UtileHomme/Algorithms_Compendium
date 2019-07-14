// https://www.geeksforgeeks.org/reverse-a-linked-list/

// using stack

#include <iostream>
#include <bits/stdc++.h>

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

    stack<Node *> s;

    Node *temp = *head;

    while(temp!=NULL)
    {
        s.push(temp);
        temp = temp->next;
    }

    temp = s.top();
    *head = temp;

    while(!s.empty())
    {
        temp->next = s.top();
        s.pop();
        temp = temp->next;
    }

    temp->next = NULL;
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
