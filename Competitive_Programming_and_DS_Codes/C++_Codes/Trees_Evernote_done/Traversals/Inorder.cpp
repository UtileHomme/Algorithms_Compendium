// https://www.geeksforgeeks.org/tree-traversals-inorder-preorder-and-postorder/

// Explanation - https://stackoverflow.com/questions/23744913/how-does-this-inorder-traversal-algorithm-work

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

void InOrder(Node *node)
{
    if(node==NULL)
    {
        return;
    }

    InOrder(node->left);

    cout<<node->data<<" ";

    InOrder(node->right);

}
int main()
{
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    cout<<"Inorder traversal gives this"<<endl;

    InOrder(root);

    return 0;
}

// Time Complexity - O(n)
