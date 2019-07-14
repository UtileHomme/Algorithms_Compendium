// https: //www.geeksforgeeks.org/function-to-check-if-a-singly-linked-list-is-palindrome/

// https: //www.interviewbit.com/problems/palindrome-list/

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

    int listPalindrome(Node *head)
    {
        Node *curr, *prev, *mid, *temp; 

        int count = 0, i=0;

        //maintains the elements that have to be reversed after the mid for comparision of 
        // second and first half
        curr = head; 

        while(curr!=NULL)
        {
            count++;
            curr = curr->next;
        }

        mid = head; 

        //for odd numbers this is the actual mid 
        //for even numbers it is (n/2 + 1) node
        while(i!=(count/2))
        {
            mid = mid ->next;
            i++;
        }

        prev = mid, curr = mid->next;

        while(curr!=NULL)
        {
            temp = curr->next; 
            curr->next = prev; 
            prev = curr;
            curr = temp;
        }

        curr = head; 

        while(curr!=mid)
        {
            //prev now has the address of second half
            if(curr->data!=prev->data)
            {
               return 0;
            }

            curr = curr->next; 
            prev = prev->next;
        }

        return 1;
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
    Solution s; 

    Node *head = NULL; 

    s.Insertend(&head,1);
    s.Insertend(&head,2);
    s.Insertend(&head,3);
    s.Insertend(&head,3);
    s.Insertend(&head,2);
    s.Insertend(&head,1);

    s.printList(head);
    cout<<endl;

    int k = s.listPalindrome(head);

    cout<<k;

        return 0;
}