// http://www.geeksforgeeks.org/linked-list-set-3-deleting-node/


#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

void printList(Node *temp)
{
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

//adding a new node in the front of the linked list
void push (Node **head, int newdata)
{
    Node *newnode = new Node;

  //add the data to this new node
    newnode->data = newdata;

  //assign the address of HEAD into the pointer of newnode
    newnode->next =  *head;

    //make the head point to the address of newnode
    *head = newnode;
}

void deleteNode(Node **head, int key)
{
    // pass the value of "head" to "temp"
    Node *temp = *head,  *prev;

    // if the key is found at the head node itself, then reassign the "head" to the address of the next node and make that the new "head"
    //also free the memory of "temp" which contained the original "head"
    if(temp!=NULL && temp->data==key)
    {
        *head = temp->next;
        free(temp);
        return;
    }

    // while the key is not found, set the value of "prev" to the current value of "temp" and set the value of "temp" to the next node
    while(temp!=NULL && temp->data!=key)
    {
        prev = temp;
        temp = temp->next;
    }

    // as soon as the key has been found, change the address of "current prev" to that of the "current temp" so that we can free the current "temp"
    //free the "temp" -- this is where the key exists
    prev->next = temp->next;
    free(temp);
}

int main()
{
    Node *head = NULL;

    push(&head,5);
    push(&head,7);
    push(&head,8);
    push(&head,4);
    push(&head,3);
    push(&head,2);

    deleteNode(&head, 8);

    printList(head);

    return 0;
}
