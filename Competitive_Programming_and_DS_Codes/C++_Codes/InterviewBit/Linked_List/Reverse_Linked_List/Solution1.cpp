// https: //www.interviewbit.com/problems/reverse-linked-list/

// https: //www.geeksforgeeks.org/reverse-a-linked-list/

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
              cout << temp->data << endl;
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

      Node *reverseList(Node *head)
      {
          if (head == NULL)
          {
              return head;
          }

          Node *curr = head, *nextNode, *prevNode;

          prevNode = NULL;

          while (curr != NULL)
          {
              nextNode = curr->next;
              curr->next = prevNode;
              prevNode = curr;
              curr = nextNode;
          }

          head = prevNode;
          return head;
    }
};

int main()
{
    Node *head = NULL;

    Solution s; 

    s.frontPush(&head, 20);
    s.frontPush(&head, 4);
    s.frontPush(&head, 15);
    s.frontPush(&head, 85);

    s.printList(head);

    head = s.reverseList(head);

    cout<<"Reversed List"<<endl;
    s.printList(head);

    return 0;
}
