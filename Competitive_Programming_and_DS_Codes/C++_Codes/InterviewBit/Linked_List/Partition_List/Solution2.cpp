// https: //www.interviewbit.com/problems/partition-list/

// https : //www.geeksforgeeks.org/partitioning-linked-list-around-given-value-dont-care-making-elements-list-stable/

// If stability of elements is not important

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
    Node *partitionList(Node *A, int B)
    {
        Node *tail = A;
        Node *curr = A;

        while(curr!=NULL)
        {
            Node *next = curr->next; 

            if(curr->data<B)
            {
                curr->next = A;
                A = curr;
            }

            else 
            {
                tail->next = curr;
                tail = curr;
            }

            curr = next;
        }

        tail->next = NULL;

        return A;
    }

    void printList(Node *head)
    {
        Node *temp = head;

        while (temp != NULL)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }

    void fpush(Node **head, int newdata)
    {
        Node *newnode = new Node;

        newnode->data = newdata;

        newnode->next = *head;

        *head = newnode;
    }
};

int main()
{
    Solution s;

    Node *head = NULL;

    s.fpush(&head, 10);
    s.fpush(&head, 2);
    s.fpush(&head, 4);
    s.fpush(&head, 5);
    s.fpush(&head, 1);

    s.printList(head);

    head = s.partitionList(head, 4);

    cout << endl;

    s.printList(head);
}