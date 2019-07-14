// https: //www.interviewbit.com/tutorial/linked-list-implementation/#linked-list-implementation

// https: //www.geeksforgeeks.org/write-a-function-to-get-the-intersection-point-of-two-linked-lists/

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

    int getLength(Node *head)
    {
        int cnt=0;

        while(head!=NULL)
        {
            cnt++;
            head = head->next;
        }

        return cnt;
    }

    void printList(Node *temp)
    {
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }

    Node * getIntersectionNode(Node *A, Node *B)
    {
        if(A==NULL || B == NULL)
        {
            return NULL;
        }

        Node *pA = A;

        Node *pB = B;

        int lenA = getLength(A);
        int lenB = getLength(B);

        int lenDiff = lenA - lenB; 

        //if A list is bigger than B list
        if(lenDiff>0)
        {
            //Traverse the bigger list by "lenDiff" positions
            while(lenDiff!=0)
            {
                pA = pA->next; 
                lenDiff--;
            }
        }
        //if B list is bigger than A list
        else if(lenDiff<0)
        {
            while(lenDiff!=0)
            {
                pB = pB->next; 
                lenDiff++;
            }
        }

        while(pA!=NULL && pB!=NULL)
        {
            if(pA == pB)
            {
                return pA;
            }

            pA = pA->next; 
            pB = pB->next;
        }


        return NULL;

    }
};


int main()
{
    Solution s; 

    Node *newNode = new Node;
    Node *A = new Node; 

    Node *B = new Node;

    //The intersections points have the same address 
    // in both linked lists

    A->data = 10;
    B->data = 3;

    Node *newnode = new Node;
    newnode->data = 6;
    B->next = newnode;

    Node *newnode1 = new Node;
    newnode1->data = 9;
    B->next->next = newnode1;

    Node *newnode2 = new Node;
    newnode2->data = 15; 
    A->next = newnode2; 
    B->next->next->next = newnode2;

    Node *newnode3 = new Node;
    newnode3->data = 30;
    A->next->next  = newnode3; 
    A->next->next->next = NULL;

    s.printList(A);

    cout<<endl;
    s.printList(B);

    Node * C = s.getIntersectionNode(A,B);
    
    cout<<endl;
    s.printList(C);


    return 0;
}