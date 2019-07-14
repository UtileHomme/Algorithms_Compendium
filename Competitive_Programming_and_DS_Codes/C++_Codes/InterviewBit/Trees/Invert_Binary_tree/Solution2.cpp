// https: //www.interviewbit.com/problems/invert-the-binary-tree/

// https: //www.geeksforgeeks.org/write-an-efficient-c-function-to-convert-a-tree-into-its-mirror-tree/

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

void mirror(Node *root)
{
    if(root==NULL)
    {
        return;
    }
  
    queue <Node *> q; 
    q.push(root);

    while(!q.empty())
    {
        Node *curr = q.front();
        q.pop();

        swap(curr->left, curr->right);


        if(curr->left)
        {
            q.push(curr->left);
        }
        if(curr->right) 
        {
            q.push(curr->right);
        }
    }
}

void inOrder(Node *node)
{
    if(node==NULL)
    {
        return;
    }

    inOrder(node->left);
    cout<<node->data<<" ";
    inOrder(node->right);

}

int main()
{
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    inOrder(root);

    mirror(root);

    cout<<endl; 

    inOrder(root);

    return 0;
}