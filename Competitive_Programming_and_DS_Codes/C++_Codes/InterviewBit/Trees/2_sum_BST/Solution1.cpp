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

int find(Node *A, int B, set<int> &s)
{
    if (A == NULL)
    {
        return 0;
    }

    // http: //www.cplusplus.com/reference/set/set/count/
    
    //if the difference isn't there that means the value hasn't occurred yet
    if (s.count(B - (A->data)))
    {
        return 1;
    }


    s.insert(A->data);

    //recurse for left and right trees
    int k = find(A->left, B, s);
    int l = find(A->right, B, s);

    //or just return find(A->left, B, s) || find(A->right, B, s)

    return k || l;
}

int twoSumBST(Node *A, int k)
{
    set<int> s;

    return find(A, k, s);
}

int main()
{
    Node *root = newNode(7);
    root->left = newNode(4);
    root->right = newNode(9);
    root->left->left = newNode(1);
    root->left->right = newNode(5);
    root->right->left = newNode(8);

    int k = twoSumBST(root, 33);

    cout << k;

    return 0;
}

// Time Complexity - O(n)

// Space Complexity - O(n)
