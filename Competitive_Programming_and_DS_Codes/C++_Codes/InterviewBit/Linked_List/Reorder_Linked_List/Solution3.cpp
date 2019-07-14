// https://www.interviewbit.com/problems/reorder-list/

// https://www.geeksforgeeks.org/rearrange-linked-list-alternate-first-last-element/

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

        deque<Node *> d;

        while (newList != NULL)
        {
            d.push_back(newList);
            newList = newList->next;
        }

        int i = 0;

        newList = head;

        d.pop_front();

        while (!d.empty())
        {
            if (i % 2 == 0)
            {
                newList->next = d.back();
                d.pop_back();
            }
            else
            {
                newList->next = d.front();
                d.pop_front();
            }

            i++;
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