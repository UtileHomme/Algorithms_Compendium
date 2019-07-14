// https://www.geeksforgeeks.org/binary-search-tree-set-1-search-and-insertion/

// Reference - https://www.youtube.com/watch?v=qYo8BVxtoH4

// https://ideone.com/SYOFe9

#include <iostream>

using namespace std;

struct Node
{
  int data;
  Node *left;
  Node *right;
};

Node *newNode(int key)
{
  Node *newnode = new Node;
  newnode->data = key;
  newnode->left = newnode->right = NULL;

  return newnode;
}

Node *insert(Node *root, int key)
{
  if(root==NULL)
  {
    return newNode(key);
  }

  if(key<root->data)
  {
    root->left = insert(root->left, key);
  }
  else
  {
    root->right = insert(root->right, key);
  }

  return root;
}

bool search(Node *root, int key)
{
  if(root==NULL)
  {
    return false;
  }

  if(root->data==key)
  {
    return true;
  }
  if(key<root->data)
  {
    search(root->left, key);
  }
  else if(key>root->data)
  {
    search(root->right,key);
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

  bool test = search(root, 700);
  if(test==0)
  {
    cout<<"No key found";
  }
  else
  {
    cout<<"Key found";
  }

  return 0;
}

/*
 Time Complexity - O(h) where 'h' is the height of the BST

 In the worst case, we may have to travel from root to the deepest leaf node.

 The height of a skewed tree may become "n" and the time complexity of search and insert operation may become O(n)

*/
