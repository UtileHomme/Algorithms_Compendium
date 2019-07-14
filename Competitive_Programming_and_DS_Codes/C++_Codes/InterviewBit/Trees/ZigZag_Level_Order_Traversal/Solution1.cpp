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

vector <vector <int> > zizZagLevelOrder(Node *root)
{
  vector <int> A;

  vector <vector <int> > B; 

  if(root==NULL)
  {
    return B;
  }

  stack <Node *> currLevel; 
  stack <Node *> nextLevel;

  currLevel.push(root);

  bool leftToRight = true;

  while(!currLevel.empty())
  {
    Node *temp = currLevel.top();

    currLevel.pop();

    if(temp)
    {
      A.push_back(temp->data);

      //if we are to traverse from left to right
      if(leftToRight)
      {
        if(temp->left)
        {
          //push the next level elements into the stack
          nextLevel.push(temp->left);
        }

        //push the next level elements into the stack
        if(temp->right)
        {
          nextLevel.push(temp->right);
        }
      }

      //if we are to traverse from right to left
      else 
      {
        if(temp->right)
        {
          nextLevel.push(temp->right);
        }
        if(temp->left)
        {
          nextLevel.push(temp->left);
        }
      }
    }

    //we have traversed all the elements of the current level 
    //therefore, we need to make the next level(this has the next elements to be traversed)
    // as the current, and the empty current as the next

    //also we need to change the variable "leftToRight" so that the direction of traversal 
    // can be changed

    if(currLevel.empty())
    {
      leftToRight = !leftToRight;
      swap(currLevel, nextLevel);

      //push the current level nodes
      B.push_back(A);

      //clear the current vector with current level nodes
      A.clear();
    }
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

  vector <vector <int> > A = zizZagLevelOrder(root);

  for(int i=0; i<A.size(); i++)
  {
    for(int j=0; j<A[i].size(); j++)
    {
      cout<<A[i][j]<<" ";
    }

    cout<<endl;
  }

  return 0;
}

// Time Complexity - O(n)