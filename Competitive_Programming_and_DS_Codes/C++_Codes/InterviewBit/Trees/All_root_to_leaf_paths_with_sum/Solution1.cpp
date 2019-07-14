// https : //www.interviewbit.com/problems/root-to-leaf-paths-with-sum/

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

void pathSumHelper(Node *root, int remainingSum, vector <int> &curr, vector <vector <int> > &ans)
{
  if(root==NULL)
  {
    return;
  }

  remainingSum = remainingSum - root->data;
  curr.push_back(root->data);

  //if we have reached the leaf, we check whether the sum is 0 or not 
  //if it is 0, we push it the curr vector to the result 
  //if it is not 0, we need to go to the previous root, so we pop the last added element 
  // and check for its right with the remainingsum

  if(root->left==NULL && root->right==NULL)
  {
    if(remainingSum == 0)
    {
      ans.push_back(curr);
    }

    curr.pop_back();

    //return to the last called function with the root and the remainingsum
    return;
  }

  pathSumHelper(root->left, remainingSum, curr, ans);
  pathSumHelper(root->right, remainingSum, curr, ans);

  curr.pop_back();

  return;
}

vector <vector <int> > pathSum(Node *root, int sum)
{
  vector <vector <int> > ans; 

  vector <int> curr; 

  pathSumHelper(root, sum, curr, ans);

  return ans;
}


int main()
{
  Node *root = newNode(1);
  root->left = newNode(2);
  root->right = newNode(3);
  root->left->left = newNode(3);
  root->left->right = newNode(4);
  root->right->left = newNode(3);
  root->right->right = newNode(2);

  int sum = 6;

  vector <vector <int>> A = pathSum(root, sum);

  for(int i=0; i<A.size();i++)
  {
    for(int j=0; j<A[i].size();j++)
    {
      cout<<A[i][j]<<" ";
    }

    cout<<endl;
  }

  return 0;
}