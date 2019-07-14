// https : //www.geeksforgeeks.org/a-program-to-check-if-a-binary-tree-is-bst-or-not/

// https : //www.youtube.com/watch?v=yEwSGhSsT0U

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

int findMax(Node *root)
{
    if (root == NULL)
    {
        return INT_MIN;
    }

    int result = root->data;

    int leftSubtreeresult = findMax(root->left);
    int rightSubstreeresult = findMax(root->right);

    if (leftSubtreeresult > result)
    {
        result = leftSubtreeresult;
    }
    if (rightSubstreeresult > result)
    {
        result = rightSubstreeresult;
    }

    return result;
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

bool isBST(Node *root)
{
    if (root == NULL)
    {
        return true;
    }

    //for a particular root, the max of all the nodes on its left should be lesser than the root
    if (root->left != NULL && findMax(root->left) > root->data)
    {
        return false;
    }

    //for a particular root, the min of all the nodes on its right should be greater than the root
    if (root->right != NULL && findMin(root->right) < root->data)
    {
        return false;
    }

    //check for the next left and right subtree
    if (!isBST(root->left) || !isBST(root->right))
    {
        return false;
    }

    return true;
}

int main()
{
    Node *root = newNode(7);
    root->left = newNode(4);
    root->right = newNode(9);
    root->left->left = newNode(1);
    root->left->right = newNode(5);

    bool k = isBST(root);

    cout << k;

    return 0;
}

// Time Complexity - O(n)
