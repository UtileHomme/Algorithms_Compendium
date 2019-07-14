// https : //www.geeksforgeeks.org/a-program-to-check-if-a-binary-tree-is-bst-or-not/

// https : //www.youtube.com/watch?v=yEwSGhSsT0U

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

bool isSubTreeLesser(Node *root, int value)
{
    if (root == NULL)
    {
        return true;
    }

    if ((root->data < value) && isSubTreeLesser(root->left, value) && isSubTreeLesser(root->right, value))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isSubTreeGreater(Node *root, int value)
{
    if (root == NULL)
    {
        return true;
    }

    if ((root->data > value) && isSubTreeGreater(root->left, value) && isSubTreeGreater(root->right, value))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isBST(Node *root)
{
    if (root == NULL)
    {
       return true;
    }

    if (isSubTreeLesser(root->left, root->data) && isSubTreeGreater(root->right, root->data) && isBST(root->left) && isBST(root->right))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    Node *root = newNode(7);
    root->left = newNode(4);
    root->right = newNode(9);
    root->left->left = newNode(1);
    root->left->right = newNode(5);

    bool k = isBST(root);

    cout << k;

    return 0;
}

// Time Complexity - O(n^2)
