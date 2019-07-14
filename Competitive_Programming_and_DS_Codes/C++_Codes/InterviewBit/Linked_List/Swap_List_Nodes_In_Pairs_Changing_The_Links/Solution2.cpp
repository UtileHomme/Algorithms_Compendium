// https: //www.interviewbit.com/problems/swap-list-nodes-in-pairs/

// https: //www.geeksforgeeks.org/pairwise-swap-elements-of-a-given-linked-list-by-changing-links/

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
        if (A == NULL)
        {
            return NULL;
        }
        else if (A->next == NULL)
        {
            return A;
        }
        else
        {
            Node *temp = A->next;
            A->next = swapNodesPairsLinkWise(temp->next);

            temp->next = A;

            A = temp;

            return A;
        }
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
