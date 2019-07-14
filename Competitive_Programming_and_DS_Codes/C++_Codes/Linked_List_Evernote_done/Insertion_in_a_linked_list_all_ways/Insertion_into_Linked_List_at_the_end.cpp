// http://www.geeksforgeeks.org/linked-list-set-2-inserting-a-node/


#include <iostream>

using namespace std;

struct Node {
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

void InsertNode(Node *prev, int newdata)
{
  //if we do not have any node till now , return
  if(prev==NULL)
  {
    cout<<"previous Node cannot be null";
    return;
  }

  Node *newnode = new Node;

  newnode->data = newdata;

  //whatever was the pointer address in the previous node, put it in the newnode pointer since it will point there now
  newnode->next = prev->next;

  //whatever is the address in the pointer of previous node, replace it with the address of the newnode
  prev->next = newnode;
}

void Insertend(Node **ref, int newdata)
{
  Node *newnode = new Node;

  Node *last = *ref;

  newnode->data = newdata;

  //since this will be the last node, its pointer address should have NULL
  newnode->next = NULL;

  // if the variable that has been passed has its address as "NULL",assign the ref with the value of the newnode
  if(*ref==NULL)
  {
    *ref = newnode;
    return;
  }

  //find the address of the node which has its pointer address as NULL
  while(last->next!=NULL)
  {
    last = last->next;
  }

  last->next = newnode;

}

int main()
{
  Node *head = NULL;

  Fpush(&head, 7);
  Fpush(&head, 4);

  // cout<<head->next;
  InsertNode(head, 5);

  Insertend(&head,8);
  Insertend(&head,9);
  Insertend(&head,10);
  Insertend(&head,11);

  printList(head);
  return 0;
}
