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
  Node *mid = head;

  int cnt = 0;

  while(head!=NULL)
  {
    if(cnt%2!=0)
    {
      mid = mid->next;
    }

    cnt++;
    head=head->next;
  }

  return (mid->data);
}

int main()
{
  Node *head = NULL;
  fpush(&head, 1);
  fpush(&head, 3);
  fpush(&head, 2);
  fpush(&head, 1);
  fpush(&head, 7);

  int mid = MiddleofLL(head);

  cout<<"Middle node of the linked list is "<<mid;
  return 0;
}
