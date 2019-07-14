// https: //www.interviewbit.com/problems/remove-nth-node-from-list-end/

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
    Node *removeNthNodeFromEnd(Node *head, int B)
    {
        Node *mainPtr = head;
        Node *refPtr = head;

        int cnt = 0;

        if (head != NULL)
        {
            while (cnt < B)
            {
                if (refPtr == NULL)
                {
                    return refPtr;
                }

                //take the reference pointer by "n" nodes
                refPtr = refPtr->next;
                cnt++;
            }

            Node *prev;

            while (refPtr != NULL)
            {
                prev = mainPtr;
                mainPtr = mainPtr->next;
                refPtr = refPtr->next;
            }

            prev->next = mainPtr->next;
            free(mainPtr);
        }

       

        return head;
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
    Node *head = NULL;

    Solution s;

    s.Insertend(&head, 1);
    s.Insertend(&head, 2);
    s.Insertend(&head, 3);
    s.Insertend(&head, 4);
    s.Insertend(&head, 6);

    head = s.removeNthNodeFromEnd(head, 1);

    s.printList(head);
    cout << endl;

    return 0;
}