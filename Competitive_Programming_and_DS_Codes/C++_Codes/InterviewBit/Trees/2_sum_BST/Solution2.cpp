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

int twoSumBST(Node *A, int k)
{
   set <int> s;

   queue <Node *> q; 

   q.push(A);

    while(!q.empty())
    {
        if(q.front()!=NULL)
        {
            Node *node = q.front();

            q.pop();

            if(s.find(k - node->data)!=s.end())
            {
                return 1;
            }

            s.insert(node->data);

            q.push(node->right);
            q.push(node->left);
        }
        //This is to remove NULL values
        else 
        {
            q.pop();
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

    int k = twoSumBST(root, 33);

    cout << k;

    return 0;
}

// Time Complexity - O(n)

// Space Complexity - O(n)
