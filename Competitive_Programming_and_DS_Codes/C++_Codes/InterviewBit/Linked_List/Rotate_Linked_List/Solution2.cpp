// https: //www.interviewbit.com/problems/rotate-list/

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
              cout << temp->data <<" ";
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

      Node *rotateRight(Node *A, int B)
      {
          if (B == 0)
          {
              return A;
          }

          Node *dummy = new Node;
          dummy->next = A;

          //fast keeps track of the last node
          //slow is the mth node  
          Node *fast = dummy, *slow = dummy; 

          int len=0;

          while(fast->next!=NULL)
          {
              fast = fast->next; 
              len++;
          }

          int mthNode = len - (B%len);

          for(int i=0;i<mthNode;i++)
          {
              slow = slow->next;
          }

          //set the last node to the head  
          fast->next = dummy->next;

          //set the head to the (m+1)th node  
          dummy->next = slow->next;        

          slow->next = NULL;  

          return dummy->next;
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

    cout<<endl;

    head = s.rotateRight(head, 7);

    s.printList(head);

    return 0;

    return 0;
}