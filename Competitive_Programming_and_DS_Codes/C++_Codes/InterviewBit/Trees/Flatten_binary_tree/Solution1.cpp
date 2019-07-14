// https://www.interviewbit.com/problems/flatten-binary-tree-to-linked-list/

// https://www.geeksforgeeks.org/flatten-a-binary-tree-into-linked-list/

// https://leetcode.com/problems/flatten-binary-tree-to-linked-list/

#include <iostream> 
#include <bits/stdc++.h> 

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

Node * flatten(Node *root)
{
    Node *A = root; 

    while(root)
    {
        if(root->left && root->right)
        {
            Node *temp = root->left; 

            while(temp->right)
            {
                temp = temp->right;
            }

            temp->right = root->right;
        }

        if(root->left)
        {
            root->right = root->left;
        }

        root->left = NULL; 

        root = root->right;
    }

    return A;
}

void inOrder(Node *root)
{
    if(root==NULL)
    {
        return;
    }

    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

int main()
{
    Node *root = newNode(7);
    root->left = newNode(4);
    root->right = newNode(9);
    root->left->left = newNode(1);
    root->left->right = newNode(5);
    root->right->left = newNode(10);

    root = flatten(root);

    inOrder(root);

    return 0;
}

// Time Complexity - O(n)
