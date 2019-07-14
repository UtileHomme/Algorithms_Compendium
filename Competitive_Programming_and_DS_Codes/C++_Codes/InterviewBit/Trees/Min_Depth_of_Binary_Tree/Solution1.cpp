// https : //www.interviewbit.com/problems/min-depth-of-binary-tree/

// https : //www.geeksforgeeks.org/find-minimum-depth-of-a-binary-tree/

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

int minDepth(Node *root)
{
    // Corner case. Should never be hit unless the code is called on root = NULL
    if (root == NULL)
    {
        return 0;
    }

    // Base case : Leaf Node. This accounts for height = 1.
    if (root->left == NULL && root->right == NULL)
    {
        return 1;
    }

    // If left subtree is NULL, recur for right subtree
    if (!root->left)
    {
        return minDepth(root->right) + 1;
    }

    // If right subtree is NULL, recur for left subtree
    if (!root->right)
    {
        return minDepth(root->left) + 1;
    }

    return min(minDepth(root->left), minDepth(root->right)) + 1;
}

int main()
{
    Node *root = newNode(7);
    root->left = newNode(4);
    root->right = newNode(9);
    root->left->left = newNode(1);
    root->left->right = newNode(5);
    root->right->left = newNode(10);

    int k = minDepth(root);

    cout << k;

    return 0;
}

// Time Complexity - O(n)
