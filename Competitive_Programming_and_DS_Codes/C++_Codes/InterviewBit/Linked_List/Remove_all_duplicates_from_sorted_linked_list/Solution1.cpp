// https: //www.interviewbit.com/problems/remove-duplicates-from-sorted-list-ii/

// https: //www.geeksforgeeks.org/remove-occurrences-duplicates-sorted-linked-list/

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

    Node * removeAllDuplicates(Node *head)
    {
        Node * dummy = new Node; 

        dummy->next = head; 

        Node *prev = dummy;

        Node *curr = head; 

        while(curr!=NULL)
        {
            while(curr->next!=NULL && prev->next->data ==  curr->next->data)
            {
                curr = curr->next;
            }

            // if the two elements being compared are distinct    
            if(prev->next==curr)
            {
                prev = prev->next;
            }
            // if the two elements being compared are same
            else 
            {
                prev->next = curr->next;
            }

            curr = curr->next;
        }

        head = dummy->next;

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
    s.Insertend(&head, 4);

    head = s.removeAllDuplicates(head);

    s.printList(head);
    cout << endl;

    return 0;
}