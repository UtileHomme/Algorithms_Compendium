// https://www.geeksforgeeks.org/detect-loop-in-a-linked-list/

// https://www.geeksforgeeks.org/find-first-node-of-loop-in-a-linked-list/

// https : //www.interviewbit.com/problems/list-cycle/

#include <iostream>

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

            break;
        }
    }

    if (one_ptr == NULL || two_ptr == NULL)
    {
        return NULL;
    }

    Node *curr = head;

    //helps find the start of the loop
    while (curr != one_ptr)
    {
        curr = curr->next;
        one_ptr = one_ptr->next;
    }

    return curr;
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
