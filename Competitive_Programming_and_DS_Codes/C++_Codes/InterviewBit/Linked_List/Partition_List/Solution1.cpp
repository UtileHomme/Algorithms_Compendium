// https: //www.interviewbit.com/problems/partition-list/

// https: //www.geeksforgeeks.org/partitioning-a-linked-list-around-a-given-value-and-keeping-the-original-order/

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

    Node * partitionList(Node *A, int B)
    {
        Node *smallerHead = NULL, *smallerLast = NULL, *greaterHead = NULL, *greaterLast = NULL;

        Node *temp = A; 

        while(temp)
        {
            if(temp->data < B)
            {
                if(smallerHead == NULL)
                {
                    smallerHead = temp;
                    smallerLast = temp;
                }
                else 
                {
                    smallerLast->next = temp; 
                    smallerLast = temp;
                }
            }

            else if(temp->data>=B)
            {
                if(greaterHead==NULL)
                {
                    greaterHead = temp;
                    greaterLast = temp;
                }
                else 
                {
                    greaterLast->next = temp; 
                    greaterLast = temp;
                }
            }

            temp = temp->next;
        }

        if(smallerLast!=NULL)
        {
            smallerLast->next = NULL;
        }

        if(greaterLast!=NULL)
        {
            greaterLast->next = NULL;
        }

        if(smallerLast!=NULL)
        {
            smallerLast->next = greaterHead;
        }

        if(smallerHead!=NULL)
        {
            return smallerHead;
        }
        else 
        {
            return greaterHead;
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

    s.fpush(&head, 10);
    s.fpush(&head, 2);
    s.fpush(&head, 4);
    s.fpush(&head, 5);
    s.fpush(&head, 1);

    s.printList(head);

    head = s.partitionList(head, 4);

    cout << endl;

    s.printList(head);
}