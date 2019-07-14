// https : //www.geeksforgeeks.org/how-to-determine-if-a-binary-tree-is-balanced/

// https : //leetcode.com/problems/balanced-binary-tree/discuss/35973/My-short-O(n)-recursive-C%2B%2B-code

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
        return 0;
    }

    int lh = height(root->left);
    int rh = height(root->right);

    if (lh == -1 || rh == -1 || abs(lh - rh) > 1)
    {
        return -1;
    }

    return max(lh, rh) + 1;
}

int isBalanced(Node *root)
{
    return height(root) != -1;
}

int main()
{
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    int k = isBalanced(root);

    cout << k;

    return 0;
}

// Time Complexity - O(n)
