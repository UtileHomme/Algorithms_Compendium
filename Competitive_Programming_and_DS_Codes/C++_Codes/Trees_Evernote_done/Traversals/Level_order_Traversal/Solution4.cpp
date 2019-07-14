// https : //www.geeksforgeeks.org/level-order-traversal-line-line-set-3-using-one-queue/

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

void printLevelOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    queue<Node *> s;

    Node *curr;

    s.push(root);
    s.push(NULL);

    while (s.size() > 1)
    {
        curr = s.front();

        s.pop();

        //when curr is null that means we've covered all the nodes in a particular level
        if (curr == NULL)
        {
            s.push(NULL);
            cout << endl;
        }
        else
        {
            if (curr->left)
            {
                s.push(curr->left);
            }

            if (curr->right)
            {
                s.push(curr->right);
            }

            cout << curr->data << " ";
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
    root->right->left = newNode(6);

    printLevelOrder(root);

    return 0;
}

// Time Complexity - O(n)
