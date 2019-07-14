// https://www.geeksforgeeks.org/reverse-a-linked-list/

// https://www.youtube.com/watch?v=KYH83T4q6Vs&t=0s&index=11&list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P


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

void reverseLL_recursion(Node *curr, Node *prev, Node **head)
{
    if(curr->next==NULL)
    {
        *head = curr;
        curr->next= prev;
        return;
    }

    Node *next = curr->next;
    curr->next = prev;

    reverseLL_recursion(next, curr, head);
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

    reverseLL_recursion(head, NULL, &head);

    printList(head);

    return 0;
}

// Time Complexity = O(n)
// Space Complexity = O(1)
