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

bool isBST(Node *root)
{
    if (root == NULL)
    {
        return true;
    }

    stack <Node *> s;

    Node * pre = NULL; 

    while(root!=NULL || !s.empty())
    {
        while(root!=NULL)
        {
            s.push(root);
            root = root->left;
        }

        root = s.top();

        s.pop();

        if(pre!=NULL && root->data<=pre->data)
        {
            return false;
        }

        pre = root;
        root = root->right;
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
