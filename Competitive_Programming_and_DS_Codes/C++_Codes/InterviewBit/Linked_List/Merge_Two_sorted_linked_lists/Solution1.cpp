// https: //www.interviewbit.com/problems/merge-two-sorted-lists/

// https: //www.geeksforgeeks.org/merge-two-sorted-lists-place/

// In-place merging - No new list is created

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
    Node *mergeTwoLists(Node *A, Node *B)
    {
        Node *temp1, *temp2, *prev, *temp;

        prev = NULL;

        temp1 = A;
        temp2 = B;

        while (temp1 != NULL && temp2 != NULL)
        {

            //if the first element in the second list is less than the first element in the first list
            if (temp2->data <= temp1->data)
            {
                if (prev == NULL)
                {
                    //maintains the location of the last data address which is the part of the assumed sorted list
                    prev = temp2;

                    //since we are returning "A" in the end, and the first element of B is less than A, therefore A should be initialized to the first address of B
                    A = temp2;

                    temp2 = temp2->next;

                    //assume that after the element from the second linked list has been chosen, the very next element is the element from the first linked list
                    prev->next = temp1;
                }
                else
                {
                    //to the last sorted elements address add the next largest elements address from second linked list
                    prev->next = temp2;

                    // maintain the old address of second linked list element's next address
                    temp = temp2->next;

                    //assume that after the element from the second linked list has been chosen, the very next element is the element from the first linked list
                    temp2->next = temp1;

                    //move the second linked list element to its next address
                    temp2 = temp;

                    //the prev needs to move to the next address which is the address of the second linked list element which was just added above
                    prev = prev->next;
                }
            }

            // If the element in A is less than that of B
            else
            {
                //if the first element of A is less than the first element of B
                if (prev == NULL)
                {
                    //the first element is the smallest element
                    prev = temp1;

                    //move to the next element in A
                    temp1 = temp1->next;
                }
                else
                {
                    //if we have the reached the end of A, append B to it
                    if (temp1->next == NULL)
                    {
                        temp1->next = temp2;
                        return A;
                    }

                    else
                    {
                        //move to the next element in A since we are adding B to A, we just move to the next element in A
                        temp1 = temp1->next;

                        //move the prev by one address
                        prev = prev->next;
                    }
                }
            }
        }

        return A;
    }

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

    Node *head1 = NULL;
    Node *head2 = NULL;
    Node *head3 = NULL;

    Solution s;

    s.Insertend(&head1, 5);
    s.Insertend(&head1, 8);
    s.Insertend(&head1, 20);

    s.Insertend(&head2, 4);
    s.Insertend(&head2, 12);
    s.Insertend(&head2, 15);

    s.printList(head1);
    cout << endl;
    s.printList(head2);

    head3 = s.mergeTwoLists(head1, head2);

    cout << endl;

    s.printList(head3);
    cout << endl;

    return 0;
}