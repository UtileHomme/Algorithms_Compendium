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

Node *buildTreeCompletely(vector<int> &inOrder, vector<int> &postOrder, int start, int end, int &postorderIndex, map<int, int> &mp)
{
    if (start > end)
    {
        return NULL;
    }

    int curr = postOrder[postorderIndex--];
    Node *root = newNode(curr);

    if (start == end)
    {
        return root;
    }

    //find this element in the map
    int inorderIndex = mp[curr];

    root->right = buildTreeCompletely(inOrder, postOrder, inorderIndex + 1, end, postorderIndex, mp);

    root->left = buildTreeCompletely(inOrder, postOrder, start, inorderIndex - 1, postorderIndex, mp);

    return root;
}

Node *buildTree(vector<int> postOrder, vector<int> inOrder)
{

    int len = inOrder.size();

    map<int, int> mp;

    int postIndex = postOrder.size() - 1;

    //make a hash table out of the elements in InOrder vectors so that they are easy to search
    for (int i = 0; i < len; i++)
    {
        mp[inOrder[i]] = i;
    }

    return buildTreeCompletely(inOrder, postOrder, 0, len - 1, postIndex, mp);
}

int main()
{

    vector<int> inOrder = {4, 2, 5, 1, 3, 6};
    vector<int> postOrder = {4, 5, 2, 6, 3, 1};

    Node *root = buildTree(postOrder, inOrder);

    inorder(root);

    return 0;
}

// Time Complexity - O(n)
