// https : //www.interviewbit.com/problems/identical-binary-trees/

// https : //www.geeksforgeeks.org/write-c-code-to-determine-if-two-trees-are-identical/

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

bool identicalTrees(Node *A, Node *B)
{
    if(A==NULL && B==NULL)
    {
        return true;
    }

    if(A!=NULL && B!=NULL)
    {
        return (A->data==B->data && identicalTrees(A->left, B->left) && identicalTrees(A->right, B->right));
    }

    return false;
}

int main()
{
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    Node *root1 = newNode(1);
    root1->left = newNode(2);
    root1->right = newNode(3);
    root1->left->left = newNode(4);
    root1->left->right = newNode(5);

    bool k = identicalTrees(root, root1);

    cout << k;

    return 0;
}

// Time Complexity - O(n)
