// https : //www.geeksforgeeks.org/find-the-minimum-element-in-a-binary-search-tree/

#include <iostream>

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

int minValue(Node *root)
{
   if(root->left==NULL)
   {
       return root->data;
   }

   return minValue(root->left);
}

int main()
{
    Node *root = newNode(7);
    root->left = newNode(4);
    root->right = newNode(9);
    root->left->left = newNode(2);
    root->left->right = newNode(5);

    int k = minValue(root);

    cout<<k;

    return 0;
}

// Time Complexity - O(n)
