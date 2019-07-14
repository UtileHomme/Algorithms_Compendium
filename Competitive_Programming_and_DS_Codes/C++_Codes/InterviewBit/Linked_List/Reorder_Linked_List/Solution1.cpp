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

    Node *mergeTwoLists(Node *node1, Node *node2)
    {
        if (node1 == NULL)
        {
            return node2;
        }
        if (node2 == NULL)
        {
            return node1;
        }

        Node *head = node1;
        node1 = node1->next;

        Node *newList = head;

        // A boolean to track which list we need to extract from.
        // We alternate between first and second list.
        bool curListNum = true;

        while (node1 && node2)
        {
            if (curListNum == false)
            {
                newList->next = node1;
                node1 = node1->next;
            }
            else
            {
                newList->next = node2;
                node2 = node2->next;
            }

            newList = newList->next;
            curListNum = !curListNum;
        }

        if (node1)
        {
            newList->next = node1;
        }
        else
        {
            newList->next = node2;
        }

        return head;
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

    Node *reOrderList(Node *head)
    {
        if (head == NULL || head->next == NULL || head->next->next == NULL)
        {
            return head;
        }

        Node *slow = head, *fast = head;

        while (slow != NULL && fast != NULL && fast->next != NULL && fast->next->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        //For odd numbered nodes, the middle node is (n/2+1)
        Node *mid = slow->next;

        slow->next = NULL;

        Node *secondHalfReversed = reverseList(mid);

        return head = mergeTwoLists(head, secondHalfReversed);
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

    s.printList(head);

    head = s.reOrderList(head);

    s.printList(head);

    return 0;
}