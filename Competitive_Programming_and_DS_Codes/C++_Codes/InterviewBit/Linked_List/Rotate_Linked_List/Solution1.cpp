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

          Node *temp = A;

          int len = 0;

          //find the length of the linked list
          while (temp != NULL)
          {
              temp = temp->next;
              len++;
          }

          if (B > len)
          {
              B = B % len;
          }

          //find the difference between the length and the number given
          int m = len - B;

          Node *curr = A;

          int cnt = 1;

          //move the "mth" node
          while (cnt < m && curr != NULL)
          {
              curr = curr->next;
              cnt++;
          }

          if (curr == NULL)
          {
              return A;
          }

          //this is the "mth" node now  
          Node *mthNode = curr;

          while (curr->next != NULL)
          {
              curr = curr->next;
          }

          //curr is the last node in the linked list
          curr->next = A;

          //the head should be the "m+1th" node
          A = mthNode->next;

          //the next of "mth" node should be NULL since it is the last node now
          mthNode->next = NULL;

          return A;
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

    head = s.rotateRight(head, 8);

    s.printList(head);

    return 0;

    return 0;
}