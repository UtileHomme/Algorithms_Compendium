// https://www.geeksforgeeks.org/inorder-tree-traversal-without-recursion/

// https: //www.interviewbit.com/problems/inorder-traversal/

#include <iostream>  
#include <bits/stdc++.h>

using namespace std; 

struct Node 
{
    int data;
    Node *left;
    Node *right; 

    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

void RunInOrder(Node *root, vector <int> &B)
{
    if(root==NULL)
    {
        return;
    }

    RunInOrder(root->left, B);
    B.push_back(root->data);
    RunInOrder(root->right, B);
}

class Solution 
{
    public: 

    vector <int> inOrderWithRecursion(Node *root)
    {
        vector <int> B;

        RunInOrder(root, B);

        return B;
    }
};

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->left->left->left = new Node (6);
    root->left->left->right = new Node (7);

    Solution s;

    vector<int> B = s.inOrderWithRecursion(root);

    for(int i=0; i<B.size();i++)
    {
        cout<<B[i]<<" ";
    }
    
    return 0;
}