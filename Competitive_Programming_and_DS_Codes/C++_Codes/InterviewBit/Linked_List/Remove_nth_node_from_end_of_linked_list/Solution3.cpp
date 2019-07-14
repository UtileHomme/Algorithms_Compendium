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
        int len=0, i;

        Node *temp = head; 

        //find the length of the linked list
        while(temp!=NULL)
        {
            temp = temp->next;
            len++;
        }

        //if the length of the node is less than or equal to the number given, remove the first node
        if(len<=B || len==1)
        {
            head = head->next;
            return head;
        }

        temp = head; 

        int cnt = 0;

        while(cnt<len-B-1)
        {
            cnt++;
            temp = temp->next;
        }

        temp->next = (temp->next)->next; 

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



    head = s.removeNthNodeFromEnd(head,2);

    s.printList(head);
    cout << endl;

    return 0;
}