// https://www.interviewbit.com/problems/next-greater-number-bst/

// https://www.geeksforgeeks.org/binary-search-tree-set-1-search-and-insertion/

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

Node *search(Node *root,int B)
{
    if(root==NULL || root->data==B)
    {
        return root;
    }

    if(root->data<B)
    {
        return search(root->right, B);
    }

    return search(root->left, B);
}

Node *findMin(Node *root)
{
    if(root==NULL)
    {
        return NULL;
    }
    
    while(root->left!=NULL)
    {
        root= root->left;
    }
    
    return root;
}

Node *getSuccessor(Node *root, int B)
{
    Node *current = search(root, B);

      if(current==NULL)
    {
        return NULL;
    }
    
    //if the current has a right subtree, the inorder successor is the 
    //minimum of that subtree
    if(current->right!=NULL)
    {
        return findMin(current->right);
    }

    //else we have to find the ancestor of this node
    else 
    {
        Node *successor = NULL;
        Node *ancestor = root; 
        
        while(ancestor!=current)
        {
            if(current->data<ancestor->data)
            {
                successor = ancestor;
                ancestor = ancestor->left;
            }
            else 
            {
                ancestor = ancestor->right;
            }
        }
        
        return successor;
    }

}

int main()
{
    Node *root = newNode(15);
    root->left = newNode(10);
    root->right = newNode(20);
    root->left->left = newNode(8);
    root->left->right = newNode(12);
    root->left->left->left = newNode(6);
    root->left->right->left = newNode(11);
    root->right->left = newNode(17);
    root->right->left->left = newNode(16);
    root->right->right = newNode(25);
    root->right->right->right = newNode(27);

    Node * k= getSuccessor(root,20);

    cout << k->data;

    return 0;
}