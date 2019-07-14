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
    
    Node * reverse(Node *head)
    {
        Node *prev = NULL; 
        Node *curr = head;
        Node *next; 

        while(curr!=NULL)
        {
            next = curr->next; 
            curr->next = prev; 
            prev = curr; 
            curr = next;
        }

        head = prev; 

        return head;
    }

    bool compareLists(Node *head1, Node *head2)
    {
        Node *temp1 = head1; 
        Node *temp2 = head2; 

        //compare each half list data with each other
        while(temp1!=NULL && temp2!=NULL)
        {
            if(temp1->data == temp2->data)
            {
                temp1 = temp1->next; 
                temp2 = temp2->next;
            }
            else 
            {
                return 0;
            }
        }

        if(temp1==NULL && temp2==NULL)
        {
            return 1;
        }

        return 0;
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

    int listPalindrome(Node *head)
    {
        //for maintaining the middle element 
        Node *slow_ptr = head, *fast_ptr = head; 

        //for mainting the start address of the second half 
        //for maintaining the address of the element just before the middle node
        Node *second_half, *prev_slow_ptr = head; 

        //for maintaining the address of the midNode
        Node *midNode = NULL; 

        int res = 1; 

        if(head!=NULL && head->next!=NULL)
        {
            while(fast_ptr!=NULL && fast_ptr->next!=NULL)
            {
                fast_ptr = fast_ptr->next->next;

                /*We need previous of the slow_ptr for 
             linked lists  with odd elements */
                prev_slow_ptr = slow_ptr;
                slow_ptr = slow_ptr->next;
            }

            /* fast_ptr would become NULL when there are even elements in list.  
           And not NULL for odd elements. We need to skip the middle node  
           for odd case and store it somewhere so that we can restore the 
           original list*/
            if(fast_ptr!=NULL)
            {
                midNode = slow_ptr; 
                slow_ptr = slow_ptr->next;
            }

            // Now reverse the second half and compare it with first half
            second_half = slow_ptr;

            //we have to end the first half with a NULL so that the second list is comparable with the first and both have an ending point
            prev_slow_ptr->next = NULL;

            // Reverse the second half
            Node *s_half = reverse(second_half);

            res = compareLists(head, s_half);

            /*Construct the original list back */
                s_half = reverse(s_half);

                // If there was a mid node (odd size case) which
                // was not part of either first half or second half.
                if (midNode != NULL)
                {
                    prev_slow_ptr->next = midNode; 
                    midNode->next = s_half;
            }
            else 
            {
                prev_slow_ptr->next = s_half;
            }
        }

        return res;
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
    s.Insertend(&head,2);
    s.Insertend(&head,1);

    s.printList(head);
    cout<<endl;

    int k = s.listPalindrome(head);

    cout<<k;

        return 0;
}