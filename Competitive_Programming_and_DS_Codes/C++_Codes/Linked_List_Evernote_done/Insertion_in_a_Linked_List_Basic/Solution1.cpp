// http://quiz.geeksforgeeks.org/linked-list-set-1-introduction/


#include <iostream>

using namespace std;

struct Node
{
  int data;
  Node *next;
};

void printList(Node *temp)
{
  //while the variable "temp" has an address in it
  while(temp!=NULL)
  {
    //print the data at that address
    cout<<temp->data<<" ";

    //move to the next address
    temp = temp->next;
  }
}

int main()
{

  //allocate memory using malloc
  Node *head = new Node;
  Node *second = new Node;
  Node *third = new Node;

  //enter the data for that node
  head->data = 1;

  //enter the pointer address for that node
  head->next = second;

  second->data = 2;
  second->next = third;

  third->data = 3;
  third->next = NULL;

  printList(head);
  return 0;
}
