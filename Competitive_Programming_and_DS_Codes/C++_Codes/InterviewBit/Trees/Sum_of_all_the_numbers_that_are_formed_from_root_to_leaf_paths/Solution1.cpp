// https: //www.interviewbit.com/problems/sum-root-to-leaf-numbers/

// https: //www.geeksforgeeks.org/sum-numbers-formed-root-leaf-paths/

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

int treePathSums(Node *root, int value)
{
  //if the leaf has been reach
  if(root==NULL)
  {
    return 0;
  }

  value = value * 10 + root->data; 

  if(root->right==NULL && root->left==NULL)
  {
    return value;
  }

  return treePathSums(root->left, value) + treePathSums(root->right, value);
}

int sumPaths(Node *root)
{
  return (treePathSums(root,0))%1003;
}

int main()
{
    Node *root = newNode(7);
    root->left = newNode(4);
    root->right = newNode(9);
    root->left->left = newNode(1);
    root->left->right = newNode(5);
    root->right->left = newNode(10);

    int k = sumPaths(root);

    cout << k;

    return 0;
}

// Time Complexity - O(n)
