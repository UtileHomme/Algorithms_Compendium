// https://www.geeksforgeeks.org/detect-and-remove-loop-in-a-linked-list/

// https://www.geeksforgeeks.org/find-first-node-of-loop-in-a-linked-list/

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
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void removeLoop(Node *firstMatch, Node *head)
{
    Node *ptr1 = firstMatch;
    Node *ptr2 = firstMatch;

    int k = 1, i;

    // Count the number of nodes in loop
    while (ptr1->next != ptr2)
    {
        ptr1 = ptr1->next;
        k++;
    }

    // Fix one pointer to head
    ptr1 = head;

    // And the other pointer to k nodes after head
    ptr2 = head;
    for (i = 0; i < k; i++)
    {
        ptr2 = ptr2->next;
    }

    /*  Move both pointers at the same pace,
      they will meet at loop starting node */
    while (ptr2 != ptr1)
    {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    ptr2 = ptr2->next;

    while (ptr2->next != ptr1)
    {
        ptr2 = ptr2->next;
    }

    ptr2->next = NULL;
}

int detectAndRemoveLoop(Node *head)
{
    Node *one_ptr = head;
    Node *two_ptr = head;

    int cnt = 0;

    while (one_ptr != NULL && two_ptr != NULL && two_ptr->next != NULL)
    {
        one_ptr = one_ptr->next;
        two_ptr = two_ptr->next->next;

        //helps find the first meeting point
        if (one_ptr == two_ptr)
        {
            removeLoop(one_ptr, head);

            return 1;
        }
    }

    return -1;
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
