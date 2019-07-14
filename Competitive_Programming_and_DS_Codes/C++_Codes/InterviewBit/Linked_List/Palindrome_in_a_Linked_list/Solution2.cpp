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
       vector <int> temp; 

        Node * rem = head;

        while(rem!=NULL)
        {
            temp.push_back(rem->data);
            rem = rem->next;
        }

        free(rem);

        int n = temp.size(); 

        for(int i=0, j=n-1; i<j; i++, j--)
        {
            if(temp[i]!=temp[j])
            {
                return 0;
            }
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
    s.Insertend(&head,1);

    s.printList(head);
    cout<<endl;

    int k = s.listPalindrome(head);

    cout<<k;

        return 0;
}