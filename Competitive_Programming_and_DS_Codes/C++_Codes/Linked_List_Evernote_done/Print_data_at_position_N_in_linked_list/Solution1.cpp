// https://www.geeksforgeeks.org/write-a-function-to-get-nth-node-in-a-linked-list/


#include <iostream>
#include <stdlib.h>
#include <assert.h>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

void fpush(Node **head, int newdata)
{
    Node *newnode = new Node;

    newnode->data = newdata;
    newnode->next = *head;
    *head = newnode;
}

int Nthnode(Node *head, int pos)
{
    Node *temp = head;

    int cnt = 0;
    while(temp!=NULL)
    {
        if(cnt==pos)
        {
            return (temp->data);
        }

        cnt++;
        temp = temp->next;
    }

    return 0;
}

int main()
{

    Node *head = NULL;

    fpush(&head,5);
    fpush(&head,7);
    fpush(&head,3);
    fpush(&head,2);
    fpush(&head,1);

    int i = 4;
    cout<<"The element at the position "<<i<<" is "<<Nthnode(head,i);
    return 0;
}

// Time Complexity

// O(n)
