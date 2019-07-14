// https : //www.geeksforgeeks.org/find-maximum-or-minimum-in-binary-tree/

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

int findMin(Node *root)
{
    if (root == NULL)
    {
        return INT_MAX;
    }

    int result = root->data;

    int leftSubtreeresult = findMin(root->left);
    int rightSubstreeresult = findMin(root->right);

    if (leftSubtreeresult < result)
    {
        result = leftSubtreeresult;
    }
    if (rightSubstreeresult < result)
    {
        result = rightSubstreeresult;
    }

    return result;
}

int main()
{
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    int k = findMin(root);

    cout<<k; 

    return 0;
}

// Time Complexity - O(n)
