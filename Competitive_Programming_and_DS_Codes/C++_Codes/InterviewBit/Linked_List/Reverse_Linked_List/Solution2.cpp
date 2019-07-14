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

          Node *first, *rest; 

          //we are separating the first node of every 
          // recursed list from the rest  
          first = head; 
          rest = first->next;

          if(first == NULL || rest==NULL)
          {
              return head;
          }

          Node *p = reverseList(rest);

          //reverse the list and put the first element at the end  
          first->next->next = first;

          first->next = NULL; 

        return p;

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
