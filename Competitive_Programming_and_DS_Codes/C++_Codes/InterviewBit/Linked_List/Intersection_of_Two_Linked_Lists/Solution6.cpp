// https: //www.interviewbit.com/tutorial/linked-list-implementation/#linked-list-implementation

// https: //www.geeksforgeeks.org/write-a-function-to-get-the-intersection-point-of-two-linked-lists/

// This will only check whether an intersection happened or not

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

    void printList(Node *temp)
    {
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }

    bool getIntersectionNode(Node *A, Node *B)
    {
        Node *lastA = A; 
        Node * lastB = B;

        while(lastA->next!=NULL)
        {
            lastA = lastA->next;
        }

        while(lastB->next!=NULL)
        {
            lastB = lastB->next;
        }

        if(lastA==lastB)
        {
            return 1;
        }

    return 0;
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

    cout << endl;

    bool k = s.getIntersectionNode(A,B);

    if(k)
    {
        cout<<"Intersection exists";
    }
    else 
    {
        cout<<"No intersection";
    }

    return 0;
}