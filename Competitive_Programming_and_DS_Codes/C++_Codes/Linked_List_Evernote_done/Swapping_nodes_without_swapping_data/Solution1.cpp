// http://www.geeksforgeeks.org/swap-nodes-in-a-linked-list-without-swapping-data/


#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

void swapNodes(Node **head, int a , int b)
{
    //if the elements that we are trying to swap are same, return from the function
    if(a==b)
    {
        return;
    }

    //maintaining the prev and current node for element "a"
    struct Node *prevX=NULL, *currX = *head;

    while(currX!=NULL && currX->data!= a)
    {
        prevX= currX;
        currX = currX->next;
    }

    //maintaining the prev and current node for element "b"
    struct Node *prevY=NULL, *currY = *head;

    while(currY!=NULL && currY->data!= b)
    {
        prevY= currY;
        currY = currY->next;
    }

    //if there are no nodes matching those elements, return

    if(currX==NULL || currX==NULL)
    {
        return;
    }

    //if the element "a" is present at the HEAD, then prevX = NULL
    //Since we need to swap the node addresses, logically currY should be the new head if this is the case

    //if the above case , doesn't hold true, then the "address part of prevX" should have the "current address of Y" and/or vice versa

    if(prevX!=NULL)
    {
        prevX->next = currY;
    }
    else
    {
        *head = currY;
    }

    if(prevY!=NULL)
    {
        prevY->next = currX;
    }
    else
    {
        *head = currX;
    }

    //now swap the addresses of the pointers
    Node *temp = currX->next;
    currX->next = currY->next;
    currY->next = temp;

}

void Fpush(Node **head, int newdata)
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

int main()
{
    Node *head = NULL;

    Fpush(&head, 5);
    Fpush(&head, 4);
    Fpush(&head, 3);
    Fpush(&head, 2);
    Fpush(&head, 1);

    int a =5;
    int b = 4;

    printList(head);
    cout<<endl;
    swapNodes(&head, a,b);
    printList(head);

    return 0;
}
