// https://www.geeksforgeeks.org/detect-loop-in-a-linked-list/

#include <bits/stdc++.h>

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

bool LoopDetection(Node *head)
{
  unordered_set <Node *> k;

  while(head!=NULL)
  {
    if(k.find(head)!=k.end())
    {
      return true;
    }

    k.insert(head);
    head = head->next;
  }

  return false;
}

int main()
{

  Node *head = NULL;

  fpush(&head, 10);
  fpush(&head, 55);
  fpush(&head, 5);
  fpush(&head, 60);

  head->next->next->next = head;

  if(LoopDetection(head))
  {
    cout<<"Loop is present";
  }
  else
  {
    cout<<"Loop is not found";
  }

  return 0;
}
