// https : //www.geeksforgeeks.org/a-program-to-check-if-a-binary-tree-is-bst-or-not/

// https : //www.youtube.com/watch?v=yEwSGhSsT0U

// https : //www.interviewbit.com/problems/valid-binary-search-tree/

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

void InOrder(Node *node, vector<int> &A)
{
    if (node == NULL)
    {
        return;
    }
    InOrder(node->left, A);

    A.push_back(node->data);

    InOrder(node->right, A);
}

bool isBST(Node *root)
{
    vector<int> A;

    InOrder(root, A);

    for (int i = 0; i < A.size()-1; i++)
    {
        if (A[i + 1] < A[i])
        {
            return false;
        }
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
