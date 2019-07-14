// https : //www.geeksforgeeks.org/a-program-to-check-if-a-binary-tree-is-bst-or-not/

// https : //www.interviewbit.com/problems/valid-binary-search-tree/

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

bool checkValid(Node *root, int min, int max)
{
    if(root==NULL)
    {
        return true;
    }

    else if(root->data<max && root->data>min && (checkValid(root->left, min, root->data) && checkValid(root->right, root->data, max)))
    {
        return true;
    }

    return false;
}


bool isBST(Node *root)
{
    return checkValid(root, INT_MIN, INT_MAX);
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
