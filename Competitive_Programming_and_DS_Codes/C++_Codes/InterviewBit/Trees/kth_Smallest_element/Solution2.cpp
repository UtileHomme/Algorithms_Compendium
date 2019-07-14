// https://www.interviewbit.com/problems/kth-smallest-element-in-tree/

// https://www.geeksforgeeks.org/find-k-th-smallest-element-in-bst-order-statistics-in-bst/

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

int kthSmallest(Node *A, int B)
{
   stack <Node *> st; 

   Node *curr = A; 

   while(curr || !st.empty())
   {
       while(curr)
       {
           st.push(curr);
           curr = curr->left;
       }

       curr = st.top();
       st.pop();

       if(--B==0)
       {
           return curr->data;
       }

       curr = curr->right;
   }
}

int main()
{   
    Node *root = newNode(7);
    root->left = newNode(4);
    root->right = newNode(9);
    root->left->left = newNode(1);
    root->left->right = newNode(5);
    root->right->left = newNode(8);

    int k = kthSmallest(root, 5);

    cout << k;

    return 0;
}

// Time Complexity - O(n)

// Space Complexity - O(n)
 
