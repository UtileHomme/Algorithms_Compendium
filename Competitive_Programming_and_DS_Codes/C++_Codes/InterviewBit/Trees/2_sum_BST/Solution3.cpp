// https : //www.interviewbit.com/problems/2sum-binary-tree/

// https : //www.geeksforgeeks.org/find-a-pair-with-given-sum-in-bst/

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

void inOrder(Node *root, vector <int> &B)
{
    if(root==NULL)
    {
        return;
    }

    inOrder(root->left, B);
    B.push_back(root->data);
    inOrder(root->right,B);
}

int twoSumBST(Node *A, int k)
{
    vector <int> B; 

    inOrder(A, B);

    int l=0, r=B.size()-1;

    while(l<r)
    {
        int sum = B[l] + B[r];

        if(sum==k)
        {
            return 1;
        }
        if(sum<k)
        {
            l++;
        }
        else 
        {
            r--;
        }
    }

    return 0;

}

int main()
{
    Node *root = newNode(7);
    root->left = newNode(4);
    root->right = newNode(9);
    root->left->left = newNode(1);
    root->left->right = newNode(5);
    root->right->left = newNode(10);

    int k = twoSumBST(root, 6);

    cout << k;

    return 0;
}

// Time Complexity - O(n)

// Space Complexity - O(n)
