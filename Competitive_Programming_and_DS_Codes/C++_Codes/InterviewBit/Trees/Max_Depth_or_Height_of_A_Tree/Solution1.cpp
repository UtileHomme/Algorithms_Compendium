// https : //www.geeksforgeeks.org/write-a-c-program-to-find-the-maximum-depth-or-height-of-a-tree/

// https : //www.interviewbit.com/problems/max-depth-of-binary-tree/

// Here the height has been calculated on the basis of number of nodes and not the edges 
// For edges return -1

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

int maxDepth(Node *root)
{
    if (root == NULL)
    {
        return -1;
    }
    else
    {
        int leftSubtreeDepth = maxDepth(root->left);
        int rightSubtreeDepth = maxDepth(root->right);

        if (leftSubtreeDepth > rightSubtreeDepth)
        {
            return leftSubtreeDepth + 1;
        }
        else
        {
            return rightSubtreeDepth + 1;
        }
    }
}

int main()
{
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->left->right->left = newNode(6);

    int k = maxDepth(root);

    cout << k;

    return 0;
}

// Time Complexity - O(n)
