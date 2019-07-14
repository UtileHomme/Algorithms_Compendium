// https://www.geeksforgeeks.org/detect-and-remove-loop-in-a-linked-list/

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

void printList(Node *head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

void detectAndRemoveLoop(Node *head)
{
    //hash map to hash addresses of the linked list nodes
    map <Node *, int> nodeMap;

    Node *last = NULL;

    while(head!=NULL)
    {
        //if the address is not found in the hashMap
        if(nodeMap.find(head)== nodeMap.end())
        {
            nodeMap[head]++;

            //set last to the node address which is being currently traversed and added
            last = head;

            head = head->next;
        }
        else
        {
            last->next = NULL;
            break;
        }
    }

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

    head->next->next->next->next->next->next->next->next = head->next->next->next;

    detectAndRemoveLoop(head);

    printList(head);

    return 0;
}

/*
Time Complexity = O(n)
Auxilliary Space = O(1)
*/
