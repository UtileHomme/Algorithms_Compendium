// https : //www.geeksforgeeks.org/right-view-binary-tree-using-queue/

// https: //leetcode.com/problems/binary-tree-right-side-view/

// Right side view means printing the right most element of every level

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

vector<int> rightSideView(Node *root)
{
    vector <int> res; 

    if(!root)
    {
        return res;
    }

    queue <Node *> q; 

    q.push(root);

    int len; 

    Node *temp;  

    while(!q.empty())
    {
        len = q.size();

        //by the end of the loop we'll have the temp variable 
        // as the last node of that particular level
        for(int i=0; i<len; i++)
        {
            temp = q.front();

            q.pop();

            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
        }

        res.push_back(temp->data);
    }

    return res;
}

int main()
{
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(7);
    root->left->right = newNode(8);
    root->right->left = newNode(4);
    root->right->right = newNode(5);
    root->left->right->right = newNode(9);
    root->right->right->left = newNode(6);
    root->left->right->right->left = newNode(10);

    vector<int> k = rightSideView(root);

    for (int i = 0; i < k.size(); i++)
    {
        cout << k[i] << " ";
    }

    return 0;
}

// Time Complexity - O(n)
