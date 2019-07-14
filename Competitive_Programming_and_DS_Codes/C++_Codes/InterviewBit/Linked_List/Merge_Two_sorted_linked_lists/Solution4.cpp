// https: //www.interviewbit.com/problems/merge-two-sorted-lists/

// https://www.geeksforgeeks.org/merge-two-sorted-linked-lists/

// Recursive - new List is created

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

    
    Node *mergeTwoLists(Node *A, Node *B)
    {
      Node *res = NULL;

      if(A==NULL)
      {
          return B;
      }
      else if(B==NULL)
      {
          return A;
      }

      if(A->data <=B->data)
      {
          res = A;
          res->next = mergeTwoLists(A->next, B);
      }
      else 
      {
          res = B;
          res->next = mergeTwoLists(A, B->next);
      }

      return res;
    }

    void Insertend(Node **ref, int newdata)
    {
        Node *newnode = new Node;

        Node *last = *ref;

        newnode->data = newdata;

        //since this will be the last node, its pointer address should have NULL
        newnode->next = NULL;

        // if the variable that has been passed has its address as "NULL",assign the ref with the value of the newnode
        if (*ref == NULL)
        {
            *ref = newnode;
            return;
        }

        //find the address of the node which has its pointer address as NULL
        while (last->next != NULL)
        {
            last = last->next;
        }

        last->next = newnode;
    }

    void printList(Node *temp)
    {
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};

int main()
{

    Node *head1 = NULL;
    Node *head2 = NULL;
    Node *head3 = NULL;

    Solution s;

    s.Insertend(&head1, 5);
    s.Insertend(&head1, 8);
    s.Insertend(&head1, 20);

    s.Insertend(&head2, 4);
    s.Insertend(&head2, 12);
    s.Insertend(&head2, 15);

    s.printList(head1);
    cout << endl;
    s.printList(head2);

    head3 = s.mergeTwoLists(head1, head2);

    cout << endl;

    s.printList(head3);
    cout << endl;

    return 0;
}