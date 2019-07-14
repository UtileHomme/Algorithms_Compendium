// https: //www.geeksforgeeks.org/given-a-linked-list-which-is-sorted-how-will-you-insert-in-sorted-way/

// https : //www.geeksforgeeks.org/insertion-sort-for-singly-linked-list/

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
    void insertionSort(struct Node **head_ref)
    {
        Node *sortedList = NULL;

        Node *curr = *head_ref;

        while(curr!=NULL)
        {
            Node *next = curr->next; 

            sortedInsert(&sortedList, curr);

            curr = next;
        } 

        *head_ref = sortedList;

    }
    
     void sortedInsert(Node **head, Node *newNode)
    {
        Node *current;

        if ((*head == NULL) || (*head)->data >= newNode->data)
        {
            newNode->next = *head;
            *head = newNode;
        }
        else
        {
            // Locate the node before the point of insertion
            current = *head;

            while (current->next != NULL && current->next->data < newNode->data)
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

        while (temp != NULL)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }

    void fpush(Node **head, int newdata)
    {
        Node *newnode = new Node;

        newnode->data = newdata;

        newnode->next = *head;

        *head = newnode;
    }
};

int main()
{
    Solution s;

    Node *head = NULL;

    s.fpush(&head, 5);
    s.fpush(&head, 20);
    s.fpush(&head, 4);
    s.fpush(&head, 3);
    s.fpush(&head, 30);

    s.printList(head);

    s.insertionSort(&head);

    cout<<endl;

    s.printList(head);

    return 0;
}