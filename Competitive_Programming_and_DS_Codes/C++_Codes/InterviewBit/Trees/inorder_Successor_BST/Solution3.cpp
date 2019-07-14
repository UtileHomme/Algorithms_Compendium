// https://www.interviewbit.com/problems/next-greater-number-bst/

// https://www.geeksforgeeks.org/binary-search-tree-set-1-search-and-insertion/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node *parent;
};

Node *newNode(int data)
{
    Node *root = new Node;
    root->data = data;
    root->left = NULL;
    root->right = NULL;
    root->parent = NULL;

    return root;
}

Node *findMin(Node *root)
{
    if (root == NULL)
    {
        return NULL;
    }

    while (root->left != NULL)
    {
        root = root->left;
    }

    return root;
}

Node *insert(Node *node, int data)
{
    /* 1. If the tree is empty, return a new, 
      single Node */

    if (node == NULL)
    {
        return (newNode(data));
    }
    else
    {
        Node *temp1;

        /* 2. Otherwise, recur down the tree */
        if (data <= node->data)
        {
            temp1 = insert(node->left, data);
            node->left = temp1;
            temp1->parent = node;
        }
        else
        {
            temp1 = insert(node->right, data);
            node->right = temp1;
            temp1->parent = node;
        }

        /* return the (unchanged) node pointer */
        return node;
    }
}

Node *search(Node *root, int B)
{
    if (root == NULL || root->data == B)
    {
        return root;
    }

    if (root->data < B)
    {
        return search(root->right, B);
    }

    return search(root->left, B);
}

Node *getSuccessor(Node *root, int B)
{

    Node *curr = search(root, B);

    if (curr->right != NULL)
        return findMin(curr->right);

    // step 2 of the above algorithm
    Node *p = curr->parent;
    while (p != NULL && curr == p->right)
    {
        curr = p;
        p = p->parent;
    }
    return p;
}

int main()
{
    Node *root = NULL, *temp, *succ, *min;

    //creating the tree given in the above diagram
    root = insert(root, 20);
    root = insert(root, 8);
    root = insert(root, 22);
    root = insert(root, 4);
    root = insert(root, 12);
    root = insert(root, 10);
    root = insert(root, 14);
    temp = root->left;

    succ = getSuccessor(root, temp->data);

    cout << succ->data;

    return 0;
}