// Reference - https://www.youtube.com/watch?v=K7J3nCeRC80&index=10&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&t=0s

#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

void fPush(Node **head, int newdata)
{
    Node *newnode = new Node;

    newnode->data = newdata;

    newnode->next = *head;
    *head = newnode;
}

void printList(Node *head)
{

    if(head!=NULL)
    {
        cout<<head->data<<endl;
        printList(head->next);
    }
    else
    {
        return;
    }
}

void reverseprintList(Node *head)
{

    if(head!=NULL)
    {
        reverseprintList(head->next);
        cout<<head->data<<endl;
    }
    else
    {
        return;
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

    cout<<endl;

    reverseprintList(head);

    return 0;
}
