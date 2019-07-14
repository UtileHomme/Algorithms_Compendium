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
    map<int, int> rightMostValueDepth;

    int maxDepth = -1;

    stack<Node *> nodeStack;
    stack<int> depthStack;

    nodeStack.push(root);
    depthStack.push(0);

    while (!nodeStack.empty())
    {
        Node *node = nodeStack.top();
        nodeStack.pop();

        int depth = depthStack.top();
        depthStack.pop();

        if (node != NULL)
        {
            maxDepth = max(maxDepth, depth);

            /* The first node that we encounter at a particular depth contains
                * the correct value. */

               //if the depth doesn't already exist that means we haven't had the rightmost node 
               //for that level till now
            if (rightMostValueDepth.find(depth)== rightMostValueDepth.end())
            {
                rightMostValueDepth.insert(pair<int, int>(depth, node->data));
            }

            nodeStack.push(node->left);
            nodeStack.push(node->right);
            depthStack.push(depth+1);
            depthStack.push(depth+1);
        }
    }

    vector <int> rightView;

    for(int depth = 0; depth <=maxDepth; depth++)
    {
        rightView.push_back(rightMostValueDepth[depth]);
    }

    return rightView;
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
