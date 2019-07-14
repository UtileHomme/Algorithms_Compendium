// https : //www.geeksforgeeks.org/?p=2686

// Here the height has been calculated on the basis of number of nodes and not the edges
// For edges return -1

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


int height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        int leftSubtreeDepth = height(root->left);
        int rightSubtreeDepth = height(root->right);

        if (leftSubtreeDepth > rightSubtreeDepth)
        {
            return leftSubtreeDepth + 1;
        }
        else
        {
            return rightSubtreeDepth + 1;
        }
    }
}

void printGivenLevel(Node *root, int level)
{
    if(root==NULL)
    {
        return;
    }

    if(level==1)
    {
        cout<<root->data<<" ";
    }
    else if(level>1)
    {
        printGivenLevel(root->left, level-1);
        printGivenLevel(root->right, level-1);
    }
}

void printLevelOrder(Node *root)
{
    int h = height(root);

    int i; 

    for(i=1; i<=h;i++)
    {
        printGivenLevel(root,i);
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

// Time Complexity - O(n^2)
