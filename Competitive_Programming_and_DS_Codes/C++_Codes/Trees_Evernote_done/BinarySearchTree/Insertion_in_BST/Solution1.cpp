// https://www.geeksforgeeks.org/binary-search-tree-set-1-search-and-insertion/

// Reference - https://www.youtube.com/watch?v=qYo8BVxtoH4

// https://ideone.com/L6dPDB

#include <iostream>

using namespace std;

struct Node
{
  int key;
  Node *left;
  Node *right;
};

Node *newnode(int data)
{
  Node *newnode = new Node;
  newnode->key = data;
  newnode->left = newnode->right = NULL;
  return newnode;
}

Node *insert(Node *root, int data)
{
  if(root==NULL)
  {
    return newnode(data);
  }

  if(data<root->key)
  {
    root->left = insert(root->left, data);
  }
  else
  {
    root->right = insert(root->right, data);
  }

  return root;
}

void inorder(Node *root)
{
  if(root!=NULL)
  {
    inorder(root->left);
    cout<<root->key<<endl;
    inorder(root->right);
  }
}

int main()
{
  Node *root = NULL;

  root = insert(root, 50);
  insert(root, 30);
  insert(root, 20);
  insert(root, 40);
  insert(root, 70);
  insert(root, 100);

  inorder(root);

  return 0;
}

/*
 Time Complexity - O(h) where 'h' is the height of the BST

 In the worst case, we may have to travel from root to the deepest leaf node.

 The height of a skewed tree may become "n" and the time complexity of search and insert operation may become O(n)

*/
