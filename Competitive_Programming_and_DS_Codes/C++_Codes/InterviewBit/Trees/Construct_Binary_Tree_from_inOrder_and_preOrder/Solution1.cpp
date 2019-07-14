// https : //www.interviewbit.com/problems/construct-binary-tree-from-inorder-and-preorder/

// https : //www.geeksforgeeks.org/construct-tree-from-given-inorder-and-preorder-traversal/

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

void inorder(Node *root)
{
    if(root==NULL)
    {
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int search(vector <int> &inOrder, int start, int end, int value)
{
    for(int i=start; i<=end; i++)
    {
        if(inOrder[i]==value)
        {
            return i;
        }
    }
}

Node *buildTreeCompletely(vector <int> &inOrder, vector <int> &preOrder, int start, int end, int &preorderIndex)
{
    if(start>end)
    {
        return NULL;
    }

    //take the present indexed element in preOrder vector
    Node *root = newNode(preOrder[preorderIndex++]);

    if(start==end)
    {
        return root;
    }

    //find the index of this element in the inOrder vector
    int inorderIndex = search(inOrder, start, end, root->data);

    // the elements to the left of this index are part of the left subtree
    root->left = buildTreeCompletely(inOrder, preOrder, start, inorderIndex-1, preorderIndex);

    // the elements to the right of this index are part of the right subtree
    root->right = buildTreeCompletely(inOrder, preOrder, inorderIndex + 1, end, preorderIndex);

    return root;
}

Node *buildTree(vector <int> preOrder, vector <int> inOrder)
{

    int preIndex = 0;

    //start =0, end = inOrder.len - 1
    return buildTreeCompletely(inOrder, preOrder, 0, inOrder.size()-1, preIndex);
}

int main()
{
  
    vector <int> inOrder = {4,2,5,1,3,6};
    vector <int> preOrder = {1,2,4,5,3,6};

    Node *root = buildTree(preOrder, inOrder);

    inorder(root);


    return 0;
}

// Time Complexity - O(n^2)
