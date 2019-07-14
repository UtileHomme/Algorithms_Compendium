// https://www.interviewbit.com/problems/next-greater-number-bst/

// https://www.geeksforgeeks.org/binary-search-tree-set-1-search-and-insertion/

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

Node *getSuccessor(Node *root, int B)
{
    Node *max = NULL;

    while (root != NULL)
    {
        if (B > root->data)
        {
            //Value greater than B will be to the right
            root = root->right;
        }
        else if (B == root->data)
        {
            root = root->right;
        }
        else
        {
            //Answer will be value at this node or less than this
            max = root;

            //Value closer to B will be to the left
            root = root->left;
        }
    }

    return max;
}

int main()
{
    Node *root = newNode(15);
    root->left = newNode(10);
    root->right = newNode(20);
    root->left->left = newNode(8);
    root->left->right = newNode(12);
    root->left->left->left = newNode(6);
    root->left->right->left = newNode(11);
    root->right->left = newNode(17);
    root->right->left->left = newNode(16);
    root->right->right = newNode(25);
    root->right->right->right = newNode(27);

    Node *k = getSuccessor(root, 10);

    cout << k->data;

    return 0;
}