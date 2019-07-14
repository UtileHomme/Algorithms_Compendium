// https: //www.interviewbit.com/problems/sorted-array-to-balanced-bst/

// https: //www.geeksforgeeks.org/sorted-array-to-balanced-bst/

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

Node *sortedBST(const vector<int> &A, int start, int end)
{
    if (start > end)
    {
        return NULL;
    }

    int mid = start + (end - start) / 2;

    Node *root = newNode(A[mid]);

    root->left = sortedBST(A, start, mid - 1);

    root->right = sortedBST(A, mid + 1, end);

    return root;
}

Node *sortedArraytoBST(const vector<int> &A)
{
    int start = 0;
    int end = A.size()-1;

    return sortedBST(A,start, end);
}

void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main()
{
    vector<int> A = {1, 2, 3, 4, 5};

    Node *root = sortedArraytoBST(A);

    inorder(root);

    return 0;
}
