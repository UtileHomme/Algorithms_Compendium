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

void PostOrder(Node *node)
{
    if(node==NULL)
    {
        return;
    }


    PostOrder(node->left);
    PostOrder(node->right);
    cout<<node->data<<" ";
}

int main()
{
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    cout<<"Postorder Traversal looks like"<<endl;
    PostOrder(root);

    return 0;
}

// Time Complexity - O(n)
