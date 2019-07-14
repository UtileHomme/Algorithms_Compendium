// Reference - https://www.geeksforgeeks.org/binary-tree-set-1-introduction/

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
    Node *node = new Node;
    node->data = data;

    node->left = NULL;
    node->right = NULL;
}

int main()
{
    Node *root = newNode(1);

    root->left = newNode(2);
    root->right = newNode(3);

    return 0;
}
