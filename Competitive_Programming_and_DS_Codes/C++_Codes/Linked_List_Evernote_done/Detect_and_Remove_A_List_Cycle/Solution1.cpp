// https://www.geeksforgeeks.org/detect-and-remove-loop-in-a-linked-list/

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

void printList(Node *head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}


void removeLoop(Node *firstMatch, Node *head)
{
    Node *ptr1;
    Node *ptr2;

    /* Set a pointer to the beging of the Linked List and
      move it one by one to find the first node which is
      part of the Linked List */
    ptr1 = head;

    while (1)
    {
        ptr2 = firstMatch;

        while (ptr2->next != firstMatch && ptr2->next != ptr1)
        {
            ptr2 = ptr2->next;
        }

        if (ptr2->next == ptr1)
        {
            break;
        }

        ptr1 = ptr1->next;
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

    int k = detectAndRemoveLoop(head);

    printList(head);

    return 0;
}

/*
Time Complexity = O(n)
Auxilliary Space = O(1)
*/
