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

void MiddleofLL(Node *head)
{
  Node *one_ptr = head;
  Node *two_ptr = head;

  if (head!=NULL)
    {
        while (two_ptr != NULL && two_ptr->next != NULL)
        {
            two_ptr = two_ptr->next->next;
            one_ptr = one_ptr->next;
        }
        cout<<"The middle element is "<<one_ptr->data;
    }
}

int main()
{
  Node *head = NULL;
  fpush(&head, 3);
  fpush(&head, 6);
  fpush(&head, 2);
  fpush(&head, 1);
  fpush(&head, 7);

  MiddleofLL(head);

  return 0;
}
