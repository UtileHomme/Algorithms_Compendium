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

vector<vector<int>> zizZagLevelOrder(Node *root)
{

  vector<vector<int>> B;

  if (!root)
  {
    return B;
  }

  deque<Node *> tree;

  tree.push_back(root);

  //flag = 0 is left to right
  int flag = 0;

  while (!tree.empty())
  {
    int count = tree.size();

    vector<int> level;

    while (count-- > 0)
    {
      Node *curr = tree.front();
      tree.pop_front();

      level.push_back(curr->data);

      if (curr->left)
      {
        tree.push_back(curr->left);
      }
      if (curr->right)
      {
        tree.push_back(curr->right);
      }
    }

    if(flag & 1)
    {
      reverse(level.begin(), level.end());
    }

    B.push_back(level);

    flag = !flag;
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

  vector<vector<int>> A = zizZagLevelOrder(root);

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

// Time Complexity - O(n)