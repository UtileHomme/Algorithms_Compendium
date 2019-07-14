// https: //www.geeksforgeeks.org/root-to-leaf-path-sum-equal-to-a-given-number/

// https: //www.interviewbit.com/problems/path-sum/

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

int hasPathSum(Node *root, int sum)
{
    if (root == NULL)
    {
        return 0;
    }

    if (root->left == NULL && root->right == NULL)
    {
        return sum == root->data;
    }

    int remainingSum = sum - root->data;

    return hasPathSum(root->left, remainingSum) || hasPathSum(root->right, remainingSum);
}

int main()
{
    Node *root = newNode(7);
    root->left = newNode(4);
    root->right = newNode(9);
    root->left->left = newNode(1);
    root->left->right = newNode(5);
    root->right->left = newNode(10);

    int sum = 444;

    int k = hasPathSum(root, sum);

    cout << k;

    return 0;
}