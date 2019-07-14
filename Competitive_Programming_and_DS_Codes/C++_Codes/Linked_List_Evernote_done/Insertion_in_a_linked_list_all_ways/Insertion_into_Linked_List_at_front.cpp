// http://www.geeksforgeeks.org/linked-list-set-2-inserting-a-node/


#include <iostream>

using namespace std;

struct Node
{
  int data;
  Node *next;
};

//printing the linked list
void printList(Node *temp)
{
    while(temp!=NULL)
    {
      cout<<temp->data<<" ";
      temp = temp->next;
    }
}

//adding a new node in the front of the linked list
void Fpush(Node **head, int newdata)
{
  Node *newnode = new Node;

  //add the data to this new node
  newnode->data = newdata;

  //assign the address of HEAD into the pointer of newnode
  newnode->next = *head;

  //make the head point to the address of newnode
  *head = newnode;
}

int main()
{
  //this is important because we have to put some value in the pointer area of the new node
  Node *head = NULL;

  //add the elements one by one
  Fpush(&head,5);
  Fpush(&head,4);
  Fpush(&head,3);
  Fpush(&head,2);
  Fpush(&head,1);

  //print the elements of the list
  printList(head);
  return 0;
}
