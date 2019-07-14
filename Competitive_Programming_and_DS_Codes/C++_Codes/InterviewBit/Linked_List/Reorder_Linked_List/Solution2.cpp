// https://www.interviewbit.com/problems/reorder-list/

// https://www.geeksforgeeks.org/rearrange-a-given-linked-list-in-place/

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

   

    Node *reOrderList(Node *head)
    {
        Node *newList = head; 

        vector <Node *> k; 

        int size,i; 

        while(newList!=NULL)
        {
            k.push_back(newList);
            newList = newList->next;
        }

        size = k.size();

        newList = head; 

        for(i=0; i<size/2; i++)
        {
            if(i!=0)
            {
                newList->next = k[i];
                newList = newList->next;
            }

            newList->next = k[size-i-1];
            newList = newList->next;
        }

        if(size%2==1)
        {
            newList->next = k[i];
            newList = newList->next;
        }

        newList->next = NULL;

        return head;
    }
};

int main()
{
    Node *head = NULL;

    Solution s;

    s.frontPush(&head, 5);
    s.frontPush(&head, 4);
    s.frontPush(&head, 3);
    s.frontPush(&head, 2);
    s.frontPush(&head, 1);

    head = s.reOrderList(head);

    s.printList(head);

    return 0;
}