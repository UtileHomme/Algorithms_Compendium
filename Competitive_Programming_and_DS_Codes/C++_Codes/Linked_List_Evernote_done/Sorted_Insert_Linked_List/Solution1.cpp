// https: //www.geeksforgeeks.org/given-a-linked-list-which-is-sorted-how-will-you-insert-in-sorted-way/

#include <iostream>  
#include <bits/stdc++.h>

using namespace std; 

struct Node  
{
    int data; 
    Node *next;
};

Node *newNode(int new_data)
{
    /* allocate node */
    Node *new_node = new Node;

    /* put in the data  */
    new_node->data = new_data;
    new_node->next = NULL;

    return new_node;
}

class Solution 
{
    public: 

    void sortedInsert(Node **head, Node * newNode)
    {
        Node *current; 

        if((*head==NULL) || (*head)->data >= newNode->data)
        {
            newNode->next = *head; 
            *head = newNode;
        }
        else 
        {
            // Locate the node before the point of insertion
            current = *head; 

            while(current->next!=NULL && current->next->data < newNode->data)
            {
                current = current->next;
            }

            newNode->next = current->next; 
            current->next = newNode;
        }
    }

   

    void printList(Node *head)
    {
        Node *temp = head;

        while(temp!=NULL)
        {
            cout<<temp->data<<endl; 
            temp = temp->next;
        }
    }

};

int main()
{
    Solution s;

    Node *head = NULL;

    Node *new_node = newNode(5);

    s.sortedInsert(&head, new_node);

    new_node = newNode(10);

    s.sortedInsert(&head, new_node);

    new_node = newNode(7);

    s.sortedInsert(&head, new_node);

    new_node = newNode(3);

    s.sortedInsert(&head, new_node);

    new_node = newNode(1);

    s.sortedInsert(&head, new_node);

    new_node = newNode(9);

    s.sortedInsert(&head, new_node);

    s.printList(head);

    return 0;
}