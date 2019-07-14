// https://www.geeksforgeeks.org/write-a-c-function-to-print-the-middle-of-the-linked-list/

#include <iostream>

using namespace std;

struct Node
{
  int data;
  Node *next;
};

void fpush(Node **head, int newdata)
{
  Node *newnode = new Node;

  newnode->data = newdata;

  newnode->next = *head;

  *head = newnode;
}

int MiddleofLL(Node *head)
{
  Node *last = head;

  int cnt = 0;
  while(last!=NULL)
  {
    last = last->next;
    cnt = cnt+1;
  }

  for(int i=0;i<cnt/2;i++)
  {
    head = head->next;
  }

  return (head->data);
}

int main()
{
  Node *head = NULL;
  fpush(&head, 1);
  fpush(&head, 3);
  fpush(&head, 6);
  fpush(&head, 2);
  fpush(&head, 1);
  fpush(&head, 7);

  int k = MiddleofLL(head);

  cout<<k;
  return 0;
}
