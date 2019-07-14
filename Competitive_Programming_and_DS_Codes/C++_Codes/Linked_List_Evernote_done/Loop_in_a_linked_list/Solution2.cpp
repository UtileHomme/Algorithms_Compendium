// https://www.geeksforgeeks.org/detect-loop-in-a-linked-list/

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

bool LoopDetection(Node *head)
{
  Node *one_ptr = head;
  Node *two_ptr = head;

  int cnt=0;

  while(one_ptr!=NULL && two_ptr!=NULL && two_ptr->next!=NULL)
  {
    one_ptr = one_ptr->next;
    two_ptr = two_ptr->next->next;

    cnt++;

    if(one_ptr==two_ptr)
    {
      cout << cnt << endl;
      
      return true;
    }
  }

  cout<<cnt<<endl;

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

 bool test = LoopDetection(head);

 if(test==false)
 {
   cout<<"Loop is not present";
 }
 else
 {
   cout<<"Loop is present";
 }

  return 0;
}

/*
Time Complexity = O(n)
Auxilliary Space = O(1)
*/
