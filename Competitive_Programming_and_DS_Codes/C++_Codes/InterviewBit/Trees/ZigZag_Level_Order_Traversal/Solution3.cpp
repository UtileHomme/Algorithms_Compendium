// https: //www.interviewbit.com/problems/zigzag-level-order-traversal-bt/

// https: //www.geeksforgeeks.org/zigzag-tree-traversal/

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
  else
  {
    int leftSubtreeDepth = height(root->left);
    int rightSubtreeDepth = height(root->right);

    if (leftSubtreeDepth > rightSubtreeDepth)
    {
      return leftSubtreeDepth + 1;
    }
    else
    {
      return rightSubtreeDepth + 1;
    }
  }
}

void printGivenLevel(Node *root, int level, int ltr, vector <int> &A)
{
  if(root==NULL)
  {
    return;
  }

  if(level==1)
  {
    A.push_back(root->data);
  }

  else if(level>1)
  {
    if(ltr==1)
    {
      printGivenLevel(root->right, level-1, ltr, A);
      printGivenLevel(root->left, level-1, ltr, A);
    }
    else 
    {
      printGivenLevel(root->left, level - 1, ltr, A);
      printGivenLevel(root->right, level - 1, ltr, A);
    }
  }
}

vector<vector<int> > zizZagLevelOrder(Node *root)
{

  int h = height(root);

  //means left to right
  bool ltr = false;

  vector<vector<int> > B;

  for (int i = 1; i <= h; i++)
  {
    vector<int> A;

    printGivenLevel(root, i, ltr, A);

    B.push_back(A);

    ltr = !ltr;
  }

  return B;
}

int main()
{
  Node *root = newNode(7);
  root->left = newNode(4);
  root->right = newNode(9);
  root->left->left = newNode(1);
  root->left->right = newNode(5);
  root->right->left = newNode(10);

  vector<vector<int> > A = zizZagLevelOrder(root);

  for (int i = 0; i < A.size(); i++)
  {
    for (int j = 0; j < A[i].size(); j++)
    {
      cout << A[i][j] << " ";
    }

    cout << endl;
  }

  return 0;
}

// Time Complexity - O(n^2)