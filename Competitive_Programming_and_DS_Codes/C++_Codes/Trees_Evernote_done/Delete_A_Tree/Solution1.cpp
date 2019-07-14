// https://www.geeksforgeeks.org/?p=654

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void deleteTree(Node *node)
{
    if (node == NULL)
    {
        return;
    }
    deleteTree(node->left);
    deleteTree(node->right);

    cout <<"\n Deleting node: "<<node->data;
    free(node);
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    deleteTree(root);

    root = NULL;

    cout << "\n Tree deleted ";

    return 0;
}