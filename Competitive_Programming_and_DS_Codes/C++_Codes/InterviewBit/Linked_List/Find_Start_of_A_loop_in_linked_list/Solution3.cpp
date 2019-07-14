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

Node *start_node(Node *firstMeetingPoint, Node *head)
{
    Node *temp1 = firstMeetingPoint;
    Node *temp2 = firstMeetingPoint;

    cout<<temp1->data<<endl;

    int l = 1;

    //for finding the length of the loop
    while (temp1->next != temp2)
    {
        l++;
        temp1 = temp1->next;
    }

    temp1 = head;
    temp2 = head;

    //move temp2 from start to the kth node
    //this "l" is same as "m+k" which is integer multiple of "l"
    //Therefore, if we move by "l" we have moved by "m+k"
    for (int i = 0; i < l; i++)
    {
        temp2 = temp2->next;
    }

    cout<<temp2->data<<endl;

    //temp1 is at starting
    //temp2 is at (m+k) position
    while (temp2 != temp1)
    {
        temp2 = temp2->next;
        temp1 = temp1->next;
    }

    return temp2;
}

Node *StartOfLoop(Node *head)
{
    Node *slow_ptr = head;
    Node *fast_ptr = head;

    //find the first meeting point
    while (slow_ptr != NULL && fast_ptr != NULL && fast_ptr->next != NULL)
    {
        slow_ptr = slow_ptr->next;
        fast_ptr = fast_ptr->next->next;

        if (slow_ptr == fast_ptr)
        {
            return start_node(slow_ptr, head);
        }
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

    if (head != NULL)
    {
        cout << head->data;
    }
    else
    {
        cout << "No loop exists";
    }

    return 0;
}

/*
Time Complexity = O(n)
Auxilliary Space = O(1)
*/
