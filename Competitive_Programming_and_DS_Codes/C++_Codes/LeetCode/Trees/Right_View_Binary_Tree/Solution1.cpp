// https: //www.geeksforgeeks.org/print-right-view-binary-tree-2/

// https: //leetcode.com/problems/binary-tree-right-side-view/

// Right side view means printing the right most element of every level
 
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

void dfs(Node *root, int level, vector <int> &res)
{
    if(root==NULL)
    {
        return;
    }

    if(level>=res.size())
    {
        res.push_back(root->data);
    }


    dfs(root->right, level+1, res);
    dfs(root->left, level+1, res);
}

vector <int> rightSideView(Node *root)
{
    vector <int> res; 
    dfs(root, 0, res);

    return res;
}

int main()
{
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(7);
    root->left->right = newNode(8);
    root->right->left = newNode(4);
    root->right->right = newNode(5);
    root->left->right->right = newNode(9);
    root->right->right->left = newNode(6);
    root->left->right->right->left = newNode(10);

    vector<int> k = rightSideView(root);

    for(int i=0; i<k.size();i++)
    {
        cout<<k[i]<<" ";
    }

    return 0;
}

// Time Complexity - O(n)
