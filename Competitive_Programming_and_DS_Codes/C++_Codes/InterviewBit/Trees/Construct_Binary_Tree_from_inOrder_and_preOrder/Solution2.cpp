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

Node *buildTreeCompletely(vector <int> &inOrder, vector <int> &preOrder, int start, int end, int &preorderIndex, map <int, int> &mp)
{
    if(start>end)
    {
        return NULL;
    }

    int curr = preOrder[preorderIndex++];
    Node *root = newNode(curr);

    if(start==end)
    {
        return root;
    }

    //find this element in the map
    int inorderIndex = mp[curr];

    root->left = buildTreeCompletely(inOrder, preOrder, start, inorderIndex-1, preorderIndex, mp);
    
    root->right = buildTreeCompletely(inOrder, preOrder, inorderIndex + 1, end, preorderIndex, mp);

    return root;
}

Node *buildTree(vector <int> preOrder, vector <int> inOrder)
{

    int len = inOrder.size();
    
    map <int, int> mp;

    int preIndex = 0;

    //make a hash table out of the elements in InOrder vectors so that they are easy to search
    for(int i=0; i<len;i++)
    {
        mp[inOrder[i]] = i;
    }

    return buildTreeCompletely(inOrder, preOrder, 0, len - 1, preIndex, mp);
}

int main()
{
  
    vector <int> inOrder = {4,2,5,1,3,6};
    vector <int> preOrder = {1,2,4,5,3,6};

    Node *root = buildTree(preOrder, inOrder);

    inorder(root);


    return 0;
}

// Time Complexity - O(n)
