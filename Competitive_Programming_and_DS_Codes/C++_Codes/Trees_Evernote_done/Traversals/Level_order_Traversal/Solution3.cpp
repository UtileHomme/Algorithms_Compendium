// https : //www.geeksforgeeks.org/print-level-order-traversal-line-line/

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
    if(root==NULL)
    {
        return;
    }

    queue <Node *> s; 

    s.push(root);

    while(s.empty()==false)
    {
        //maintains the count of the nodes at a particular level
        int nodeCount = s.size();

        while(nodeCount>0)
        {
            Node * temp = s.front();

            cout<<temp->data<<" ";

            s.pop();

            if(temp->left!=NULL)
            {
                s.push(temp->left);
            }

            if(temp->right!=NULL)
            {
                s.push(temp->right);
            }

            nodeCount--;
        }

        cout<<endl;
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
