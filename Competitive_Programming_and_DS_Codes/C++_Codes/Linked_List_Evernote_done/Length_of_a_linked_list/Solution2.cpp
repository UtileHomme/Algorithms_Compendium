// http://www.geeksforgeeks.org/find-length-of-a-linked-list-iterative-and-recursive/
//done


#include <iostream>

using namespace std;

struct Node
{
    int data ;
    Node *next;
};

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

int getCount(Node *temp)
{
    //if at any point of time the "head" is found to be "NULL", simply return
    if(temp==NULL)
    {
        return 0;
    }

    //move to the next node and return the count (this moves to the stack one by one)

    if(temp!=NULL)
    {
    return 1 + getCount(temp->next);
    }
}

int main()
{
    Node *head = NULL;

    Fpush(&head, 1);
    Fpush(&head, 3);
    Fpush(&head, 2);
    Fpush(&head, 4);
    Fpush(&head, 5);

    int cnt = getCount(head);
    cout<<"Length of the linked list is "<<cnt;
}

// Time Complexity = O(n)
