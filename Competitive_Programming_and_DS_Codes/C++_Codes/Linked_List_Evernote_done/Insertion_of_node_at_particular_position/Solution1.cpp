#include <iostream>

using namespace std;

struct Node
{
    int data ;
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

void InsertPos(Node **head, int newdata, int pos)
{
    if(pos==1)
    {
        Node *newnode = new Node;
        newnode->data = newdata;
        newnode->next = *head;
        *head = newnode;
        return;
    }

    Node *temp = *head;

    for(int i=0;i<pos-2;i++)
    {
        temp = temp->next;
    }

    Node *newnode = new Node;
    newnode->data = newdata;
    newnode->next = temp->next;
    temp->next = newnode;
}

int main()
{
    Node *head = NULL;
    InsertPos(&head, 2,1);
    InsertPos(&head, 3,2);
    InsertPos(&head, 4,1);
    InsertPos(&head, 5,2);
    printList(head);
}
