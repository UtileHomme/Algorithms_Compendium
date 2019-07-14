// https : //www.geeksforgeeks.org/how-to-determine-if-a-binary-tree-is-balanced/

// https : //www.interviewbit.com/problems/balanced-binary-tree/

// Here the height has been calculated on the basis of number of nodes and not the edges
// For edges return -1

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

int height(Node *root)
{
    if (root == NULL)
    {
        return -1;
    }
    else
    {
        int leftSubtreeDepth = height(root->left);
        int rightSubtreeDepth = height(root->right);

        if (leftSubtreeDepth > rightSubtreeDepth)
        {
            return leftSubtreeDepth + 1;
        }
        else
        {
            return rightSubtreeDepth + 1;
        }
    }
}

int isBalanced(Node *root)
{
    if(root==NULL)
    {
        return 1;
    }

    int lh = height(root->left);
    int rh = height(root->right);

    if(abs(lh-rh)<=1 && isBalanced(root->left) && isBalanced(root->right))
    {
        return 1;
    }

    return 0;
}

int main()
{
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    // root->left->right->left = newNode(6);
    // root->left->right->left->right = newNode(7);

    int k = isBalanced(root);

    cout << k;

    return 0;
}

// Time Complexity - O(n^2)
