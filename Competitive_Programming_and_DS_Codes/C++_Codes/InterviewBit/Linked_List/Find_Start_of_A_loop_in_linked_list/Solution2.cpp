// https://www.geeksforgeeks.org/detect-loop-in-a-linked-list/

// https://www.geeksforgeeks.org/find-first-node-of-loop-in-a-linked-list/

// https : //www.interviewbit.com/problems/list-cycle/

#include <iostream>
#include <bits/stdc++.h>

        using namespace std;

struct Node
{
    int data;
    Node *next;
};

void fpush(Node **head, int newdata)
{
    Node *newnode = new Node;

    newnode->data = newdata;

    newnode->next = *head;

    *head = newnode;
}

Node *StartOfLoop(Node *head)
{
   set <Node *> s;

    //keep entering the address into the "set" until the address is found again.
    //if the address is encountered again that means the loop exists and the current address being traversed is returned
   while(head!=NULL)
   {
       if(s.find(head)!=s.end())
       {
           return head;
       }

       s.insert(head);

       head = head->next;
   }

   return NULL;
}

int main()
{
    Node *head = NULL;
    fpush(&head, 8);
    fpush(&head, 7);
    fpush(&head, 6);
    fpush(&head, 5);
    fpush(&head, 4);
    fpush(&head, 3);
    fpush(&head, 2);
    fpush(&head, 1);

    head->next->next->next->next->next->next->next = head->next->next->next;

    head = StartOfLoop(head);

    if(head!=NULL)
    {
        cout<<head->data;
    }
    else
    {
        cout<<"No loop exists";
    }

    return 0;
}

/*
Time Complexity = O(n)
Auxilliary Space = O(1)
*/
