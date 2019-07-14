// https : //www.interviewbit.com/problems/identical-binary-trees/

// https : //www.geeksforgeeks.org/iterative-function-check-two-trees-identical/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

Node *newNode(int data)
{
    Node *root = new Node;
    root->data = data;
    root->left = NULL;
    root->right = NULL;

    return root;
}

bool identicalTrees(Node *A, Node *B)
{
    if(!A && !B)
    {
        return true;
    }

    if(!A || !B)
    {
        return false;
    }

    queue <Node*> q1, q2;

    q1.push(A);
    q2.push(B);

    while(!q1.empty() && !q2.empty())
    {
        Node *n1 = q1.front();
        Node *n2 = q2.front();

        //if the current nodes which have been dequeued from both queues don't have same data
        if(n1->data!=n2->data)
        {
            return false;
        }

        q1.pop();
        q2.pop();

        //both the nodes should have a left child
        if(n1->left && n2->left)
        {
            q1.push(n1->left);
            q2.push(n2->left);
        }

        //if one of them has but the other doesn't have a left child
        else if(n1->left || n2->left)
        {
            return false;
        }

        // same as above
        if(n1->right && n2->right)
        {
            q1.push(n1->right);
            q2.push(n2->right);
        }
        else if(n1->right || n2->right)
        {
            return false;
        }


    }

    return true;
}

int main()
{
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);

    Node *root1 = newNode(1);
    root1->left = newNode(2);
    root1->right = newNode(3);
    root1->left->left = newNode(4);
    root1->left->right = newNode(5);

    bool k = identicalTrees(root, root1);

    cout << k;

    return 0;
}

// Time Complexity - O(n)
