// https : //www.geeksforgeeks.org/?p=2686

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
    queue <Node *> s; 

    Node * temp = root; 

    while(temp)
    {
        cout<<temp->data<<" ";

        if(temp->left!=NULL)
        {
            s.push(temp->left);
        }

        if(temp->right!=NULL)
        {
            s.push(temp->right);
        }

        temp = s.front();
        s.pop();
    }
}

int main()
{
    Node *root = newNode(7);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);

    printLevelOrder(root);

    return 0;
}

// Time Complexity - O(n)
