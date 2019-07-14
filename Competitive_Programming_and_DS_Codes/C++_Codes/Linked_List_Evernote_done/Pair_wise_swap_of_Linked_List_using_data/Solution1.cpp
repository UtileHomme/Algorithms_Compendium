// https : //www.geeksforgeeks.org/pairwise-swap-elements-of-a-given-linked-list/

#include <iostream>  
#include <bits/stdc++.h>

        using namespace std; 

struct Node 
{
    int data; 
    Node *next;
};

class Solution 
{
    public:
      void printList(Node *head)
      {
          Node *temp = head;
          while (temp != NULL)
          {
              cout << temp->data << " ";
              temp = temp->next;
          }
      }

      void frontPush(Node **head, int newdata)
      {
          Node *newnode = new Node;
          newnode->data = newdata;
          newnode->next = *head;
          *head = newnode;
      }

      Node *swapNodesPairsLinkWise(Node *A)
      {

          Node * head = A;

          while(A!=NULL && A->next!=NULL)
          {
              swap(A->data, A->next->data);
              A = A->next->next;
          }
         
          return head;
    }
};

int main()
{

    Solution s;

    Node *head = NULL;

    s.frontPush(&head, 6);
    s.frontPush(&head, 5);
    s.frontPush(&head, 4);
    s.frontPush(&head, 3);
    s.frontPush(&head, 2);
    s.frontPush(&head, 1);

    s.printList(head);

    cout << endl;

    head = s.swapNodesPairsLinkWise(head);

    s.printList(head);

    return 0;

    return 0;
}
