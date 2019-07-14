// https: //www.interviewbit.com/problems/symmetric-binary-tree/

// https : //www.geeksforgeeks.org/check-symmetric-binary-tree-iterative-approach/

// Iterative Approach

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

class Solution
{
  public:
    bool isSymmetric(Node *root)
    {
        if (root == NULL)
        {
            return true;
        }

        //If it is a single tree node, then it is a symmetric tree
        if (!root->left && !root->right)
        {
            return true;
        }

        queue<Node *> q;

        q.push(root);
        q.push(root);

        Node *leftNode, *rightNode;

        while (!q.empty())
        {
            leftNode = q.front();
            q.pop();

            rightNode = q.front();
            q.pop();

            if (leftNode->data != rightNode->data)
            {
                return false;
            }

            // Push left child of left subtree node
            // and right child of right subtree
            // node in queue.
            if (leftNode->left && rightNode->right)
            {
                q.push(leftNode->left);
                q.push(rightNode->right);
            }

            // If only one child is present alone
            // and other is NULL, then tree
            // is not symmetric.
            else if (leftNode->left || rightNode->right)
            {
                return false;
            }

            else if (leftNode->right && rightNode->left)
            {
                q.push(leftNode->right);
                q.push(rightNode->left);
            }

            else if (leftNode->right || rightNode->left)
            {
                return false;
            }
        }

        return true;
    }
};

int main()
{
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(2);
    root->left->left = newNode(3);
    root->left->right = newNode(4);
    root->right->left = newNode(4);
    
    Solution s;

    bool k = s.isSymmetric(root);

    cout << k;

    return 0;
}