// https: //www.interviewbit.com/problems/add-two-numbers-as-/

// https: //www.geeksforgeeks.org/add-two-numbers-represented-by-linked-lists/

#include <iostream>
#include <bits/stdc++.h>

using namespace std; 

struct Node 
{
    int data; 
    Node *next;

    //constructor for calling Node and inserting values into it
    Node(int x) : data(x), next(NULL)
    {

    }
};

void printList(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

class Solution 
{
    public:

      void fpush(Node **head, int newdata)
      {
          Node *newnode = new Node(newdata);

          newnode->next = *head;

          *head = newnode;
      }

      Node *addTwoNumbersLinkedList(Node *A, Node *B)
      {
          Node *res = NULL;

          Node *temp, *prev = NULL;

          int carry = 0, sum = 0;

          //while one of them is still not equal to NULL
          while (A != NULL || B != NULL)
          {
              //calculate the sum ensuring that whichever position has nothing should have a zero added to it automatically
              sum = carry + (A ? A->data : 0) + (B ? B->data : 0);

              carry = (sum >= 10) ? 1 : 0;

              sum = sum % 10;

              temp = new Node(sum);

              //initialize the head
              if (res == NULL)
              {
                  res = temp;
              }

              //whatever was the previous node for which the value was added, add the new values address to the next of this node
              else
              {
                  prev->next = temp;
              }

              //set the new node as prev
              prev = temp;

              if (A)
              {
                  A = A->next;
              }
              if (B)
              {
                  B = B->next;
              }
          }

          //in case there is a carry in the end, add it as a new node  
          if (carry > 0)
          {
              temp->next = new Node(carry);
          }

          return res;
    }
};

int main()
{
    Solution s;
    Node *A = NULL;

    //123
    s.fpush(&A, 1);
    s.fpush(&A, 2);
    s.fpush(&A, 3);

    // 23
    Node *B = NULL;
    s.fpush(&B, 2);
    s.fpush(&B, 3);

    printList(A);

    cout << endl;

    printList(B);

    //146
    Node *C = s.addTwoNumbersLinkedList(A, B);

    cout<<endl;

    printList(C);

    return 0;
}