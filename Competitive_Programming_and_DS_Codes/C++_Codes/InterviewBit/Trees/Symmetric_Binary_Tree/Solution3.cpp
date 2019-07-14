// https: //www.interviewbit.com/problems/symmetric-binary-tree/

// https: //www.geeksforgeeks.org/symmetric-tree-tree-which-is-mirror-image-of-itself/

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

bool isMirror(Node *root1, Node* root2)
{
    if(root1==NULL || root2==NULL)
    {
        return root1==root2;
    }

    if(root1->data != root2->data)
    {
        return false;
    }

    return isMirror(root1->left, root2->right) && isMirror(root1->right, root2->left);
}

class Solution
{
  public:
    bool isSymmetric(Node *root)
    {
        return root==NULL || isMirror(root->left, root->right);
    }
};

int main()
{
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(2);
    root->left->left = newNode(3);
    root->left->right = newNode(4);
    root->right->left = newNode(4);
    root->right->right = newNode(3);

    Solution s;

    bool k = s.isSymmetric(root);

    cout<<k;

    return 0;
}