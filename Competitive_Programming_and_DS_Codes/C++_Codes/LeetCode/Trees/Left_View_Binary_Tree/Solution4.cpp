// https : //www.geeksforgeeks.org/print-left-view-binary-tree/

// left side view means printing the left most element of every level

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

vector<int> leftSideView(Node *root)
{
    map<int, int> leftMostValueDepth;

    int maxDepth = -1;

    queue<Node *> nodeQueue;
    queue<int> depthQueue;

    nodeQueue.push(root);
    depthQueue.push(0);

    while (!nodeQueue.empty())
    {
        Node *node = nodeQueue.front();
        nodeQueue.pop();

        int depth = depthQueue.front();
        depthQueue.pop();

        if (node != NULL)
        {
            maxDepth = max(maxDepth, depth);

            /* The first node that we encounter at a particular depth contains
                * the correct value. */

            //if the depth doesn't already exist that means we haven't had the leftmost node
            //for that level till now
            if (leftMostValueDepth.find(depth) == leftMostValueDepth.end())
            {
                leftMostValueDepth.insert(pair<int, int>(depth, node->data));
            }

            nodeQueue.push(node->left);
            nodeQueue.push(node->right);

            depthQueue.push(depth + 1);
            depthQueue.push(depth + 1);
        }
    }

    vector<int> leftView;

    for (int depth = 0; depth <= maxDepth; depth++)
    {
        leftView.push_back(leftMostValueDepth[depth]);
    }

    return leftView;
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

    vector<int> k = leftSideView(root);

    for (int i = 0; i < k.size(); i++)
    {
        cout << k[i] << " ";
    }

    return 0;
}

// Time Complexity - O(n)