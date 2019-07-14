// https://www.geeksforgeeks.org/binary-search-tree-set-2-delete/

// https://ideone.com/7gXaLz

#include <iostream>

using namespace std;

struct Node
{
  int data;
  Node *left;
  Node *right;
};

Node *newnode(int item)
{
  Node *newnode = new Node;
  newnode->data = item;
  newnode->left = newnode->right = NULL;
  return newnode;
}

Node *insert(Node *root, int item)
{
  if(root==NULL)
  {
    return newnode(item);
  }


  if(item<root->data)
  {
    root->left = insert(root->left, item);
  }
  else
  {
    root->right = insert(root->right,item);
  }

  return root;
}

/* Given a non-empty binary search tree, return the node with minimum
key value found in that tree. Note that the entire tree does not
need to be searched. */
Node *minValueNode(Node *node)
{
  while(node->left!=NULL)
  {
    node = node->left;
  }

  return node;
}

Node *deleteNode(Node *node, int item)
{
  if(node==NULL)
  {
    return node;
  }

  // If the key to be deleted is smaller than the root's key,
  // then it lies in left subtree
  if(item<node->data)
  {
    node->left = deleteNode(node->left, item);
  }

  // If the key to be deleted is greater than the root's key,
  // then it lies in right subtree
  else if(item>node->data)
  {
    node->right = deleteNode(node->right, item);
  }

  // if key is same as root's key, then This is the node
  // to be deleted
  else
  {
    // node with only one child or no child
    if(node->left==NULL)
    {
      Node *newnode = node->right;
      delete(node);
      return newnode;
    }

    // node with only one child or no child
    else if(node->right==NULL)
    {
      Node *newnode = node->left;
      delete(node);
      return newnode;
    }

    // node with two children: Get the inorder successor (smallest
    // in the right subtree)
    Node *temp = minValueNode(node->right);

    // Copy the inorder successor's content to this node
    node->data = temp->data;

    // Delete the inorder successor
    node->right = deleteNode(node->right, temp->data);

  }

  return node;
}

void inorder(Node *root)
{
  if(root!=NULL)
  {
    inorder(root->left);
    cout<<root->data<<endl;
    inorder(root->right);
  }
}

int main()
{

  Node *root = NULL;
  root = insert(root, 50);
  root = insert(root, 30);
  root = insert(root, 20);
  root = insert(root, 40);
  root = insert(root, 70);
  root = insert(root, 60);
  root = insert(root, 80);

  cout<<"Inorder traversal of the given tree"<<endl;
  inorder(root);

  cout<<endl<<"Delete 20"<<endl;
  root = deleteNode(root, 20);
  cout<<"Inorder traversal of the given tree"<<endl;
  inorder(root);

  cout<<endl<<"Delete 30"<<endl;
  root = deleteNode(root, 30);
  cout<<"Inorder traversal of the given tree"<<endl;
  inorder(root);

  cout<<endl<<"Delete 50"<<endl;
  root = deleteNode(root, 50);
  cout<<"Inorder traversal of the given tree"<<endl;
  inorder(root);

  return 0;
}

/*

The worst case time complexity of delete operation is O(h) where h is height of Binary Search Tree. In worst case, we may have to travel from root to the deepest leaf node. The height of a skewed tree may become n and the time complexity of delete operation may become O(n)

*/
