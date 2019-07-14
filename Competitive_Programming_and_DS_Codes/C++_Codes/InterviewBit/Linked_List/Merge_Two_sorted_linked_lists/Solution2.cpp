// https: //www.interviewbit.com/problems/merge-two-sorted-lists/

// https: //www.geeksforgeeks.org/merge-two-sorted-lists-place/

// Out of place merging - New list is created

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
    Node *mergeTwoLists(Node *A, Node *B)
    {
        if(A==NULL)
        {
            return B;
        }
        else if(B==NULL)
        {
            return A;
        }

        Node *head = NULL; 

        //deciding the head for the new list
        if(A->data < B->data)
        {
            head = A; 
            A = A->next;
        }
        else 
        {
            head = B; 
            B = B->next;
        }

        Node *newList = head; 

        //where are using the updated A or B depending on above "if" condition
        while(A!=NULL && B!=NULL)
        {
            //whichever is smaller add that lists address into the next of newList and proceed to the next address of that list
            if(A->data < B->data)
            {
                newList->next = A;
                A = A->next;
            }
            else 
            {
                newList->next = B; 
                B = B->next;
            }

            //move the newList to its next
            newList = newList->next;
        }

        //at the end one of the list would have reached its end. Whichever is remaining , make the newList->next point to that list's address 

        if(A!=NULL)
        {
            newList->next = A;
        }
        else 
        {
            newList->next = B;
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

    Node *head1 = NULL;
    Node *head2 = NULL;
    Node *head3 = NULL;

    Solution s;

    s.Insertend(&head1, 5);
    s.Insertend(&head1, 8);
    s.Insertend(&head1, 20);

    s.Insertend(&head2, 4);
    s.Insertend(&head2, 12);
    s.Insertend(&head2, 15);

    s.printList(head1);
    cout << endl;
    s.printList(head2);

    head3 = s.mergeTwoLists(head1, head2);

    cout << endl;

    s.printList(head3);
    cout << endl;

    return 0;
}