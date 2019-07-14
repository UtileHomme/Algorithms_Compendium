// https://www.geeksforgeeks.org/tree-traversals-inorder-preorder-and-postorder/

#include <iostream>

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

void PreOrder(Node *node)
{
    if(node==NULL)
    {
        return;
    }

    cout<<node->data<<" ";
    PreOrder(node->left);
    PreOrder(node->right);
}

int main()
{
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    cout<<"Preorder Traversal looks like"<<endl;
    PreOrder(root);

    return 0;
}

// Time Complexity - O(n)
