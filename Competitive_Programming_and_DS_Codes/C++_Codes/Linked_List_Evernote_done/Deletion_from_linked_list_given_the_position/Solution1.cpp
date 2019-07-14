// http://www.geeksforgeeks.org/delete-a-linked-list-node-at-a-given-position/


#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

//create the structure of the Node
struct Node
{
    int data;
    Node *next;
};

//push elements in the front
void push(Node **head, int newdata)
{
    //create a New Node
    Node *newnode = new Node();

    //assign the data passed in the function to the Newnode data field
    newnode->data = newdata;

    //pass the value of the "present" head, into the Newnode next field
    newnode->next = *head;

    //assign the address of the head as that of the newnode so that it can come in the front
    *head = newnode;
}

void printList(Node *temp)
{
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}

void deleteNodeAtPos(Node **head, int pos)
{
    //if there is no Linked List ,i.e., "head" is NULL, return
    if(*head==NULL)
    {
        return;
    }

    //store the value of head inside a temp node
    Node *temp = *head;

    //if the "head" itself is to be deleted, pass the value of the next (NULL) into the head and free the "temp" variable
    //finally return
    if(pos==0)
    {
        *head=temp->next;
        free(temp);
        return;
    }

    //Find the address of the Node previous to the "Node to be deleted"
    for(int i=0;i<pos-1 && temp!=NULL;i++)
    {
        temp = temp->next;
    }

    //There is a possibility that the "position" given is more than the nodes in the Linked List
    //in that case the value of "temp" and "temp->next" after carrying out the above loop will come as NULL
    //if such is the case, return
    if(temp==NULL || temp->next == NULL)
    {
        return;
    }

    //Since we have the position of the previous node, replace the next of this node, with the address part of the next node
    Node *next = temp->next->next;

    //free the entire next node
    free(temp->next);

    //inside the address of the "prev" node, pass the address stored above
    temp->next = next;
}

int main()
{
    Node *head = NULL;

    push(&head, 7);
    push(&head, 1);
    push(&head, 3);
    push(&head, 2);
    push(&head, 8);

    printList(head);

    deleteNodeAtPos(&head,3);

    cout<<endl;

    printList(head);

    return 0;

}
