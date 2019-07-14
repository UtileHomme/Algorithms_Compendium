// https://www.geeksforgeeks.org/print-reverse-linked-list-without-extra-space-modifications/

// Only printing the reversed linked list without modifying linked list

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

int getCount(Node *head)
{
    int cnt = 0; 

    Node *curr = head; 
    while(curr!=NULL)
    {
        cnt++;
        curr = curr->next;
    }

    return cnt;
}

int getNth(Node *head, int n)
{
    Node *curr = head; 
    
    for(int i=0; i<n-1 && curr!=NULL; i++)
    {
        curr = curr->next;
    }

    return curr->data;
}

void printReverseLL(Node *head)
{
   int n = getCount(head);

   for(int i=n; i>=1; i--)
   {
       cout<<getNth(head, i)<<endl;
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

    printReverseLL(head);

    return 0;
}

// Time Complexity = O(n)
// Space Complexity = O(1)
