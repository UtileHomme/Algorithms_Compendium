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
          Node preHead(0), *p = &preHead;

          int carry = 0;

          while(A || B || carry)
          {
              int sum = (A ? A->data : 0) + (B ? B->data : 0) + carry; 

              carry = sum / 10;

              p->next = new Node(sum%10);

              p = p->next; 

              A = A ? A->next : A;
              B = B ? B->next : B; 
          }

          return preHead.next;
          
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