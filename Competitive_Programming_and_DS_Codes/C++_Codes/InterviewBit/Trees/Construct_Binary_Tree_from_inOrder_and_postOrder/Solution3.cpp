// https : //www.interviewbit.com/problems/binary-tree-from-inorder-and-postorder/

// https : //www.geeksforgeeks.org/construct-a-binary-tree-from-postorder-and-inorder/

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

void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

Node *buildTreeCompletely(vector<int> &inOrder, vector<int> &postOrder, int start, int end, int &postorderIndex)
{
    if (start > end)
    {
        return NULL;
    }

    //take the postsent indexed element in postOrder vector
    Node *root = newNode(postOrder[postorderIndex--]);

    if (start == end)
    {
        return root;
    }

    //find the index of this element in the inOrder vector using the find::stl
    int inorderIndex = find(inOrder.begin() + start, inOrder.begin() + end + 1, root->data) - inOrder.begin();

    // the elements to the right of this index are part of the right subtree
    root->right = buildTreeCompletely(inOrder, postOrder, inorderIndex + 1, end, postorderIndex);

    // the elements to the left of this index are part of the left subtree
    root->left = buildTreeCompletely(inOrder, postOrder, start, inorderIndex - 1, postorderIndex);

    return root;
}

Node *buildTree(vector<int> postOrder, vector<int> inOrder)
{

    int postIndex = postOrder.size() - 1;

    //start =0, end = inOrder.len - 1
    return buildTreeCompletely(inOrder, postOrder, 0, inOrder.size() - 1, postIndex);
}

int main()
{

    vector<int> inOrder = {4, 2, 5, 1, 3, 6};
    vector<int> postOrder = {4, 5, 2, 6, 3, 1};

    Node *root = buildTree(postOrder, inOrder);

    inorder(root);

    return 0;
}

// Time Complexity - O(n^2)
