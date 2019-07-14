// https: //www.interviewbit.com/problems/remove-duplicates-from-sorted-list/

// https: //www.geeksforgeeks.org/remove-duplicates-from-a-sorted-linked-list/

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

    Node * deleteDuplicates(Node *head)
    {
        Node * curr = head; 
        Node *next_next; 

        if(curr==NULL)
        {
            return curr;
        }

        while(curr->next!=NULL)
        {
            if(curr->data==curr->next->data)
            {
                next_next = curr->next->next; 
                free(curr->next);
                curr->next = next_next;
            }
            else 
            {
                curr = curr->next;
            }
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
    s.Insertend(&head, 2);
    s.Insertend(&head, 3);
    s.Insertend(&head, 3);

    head = s.deleteDuplicates(head);

    s.printList(head);
    cout << endl;

    return 0;
}