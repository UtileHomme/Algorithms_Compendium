// https://www.geeksforgeeks.org/inorder-tree-traversal-without-recursion/

// https: //www.interviewbit.com/problems/inorder-traversal/

#include <iostream>  
#include <bits/stdc++.h>

using namespace std; 

struct Node 
{
    int data;
    Node *left;
    Node *right; 

    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

class Solution 
{
    public: 

    vector <int> inOrderWithoutRecursion(Node *root)
    {
        stack <Node *> s; 

        Node *curr = root; 

        vector <int> B;

        while(curr!=NULL || s.empty()==false)
        {

            
            /* Reach the left most Node of the 
           curr Node */
            while(curr!=NULL)
            {
                /* place pointer to a tree node on 
               the stack before traversing 
              the node's left subtree */
                s.push(curr);
                curr = curr->left;
            }

            /* Current must be NULL at this point */
            curr = s.top();
            s.pop();

            B.push_back(curr->data);

            /* we have visited the node and its 
           left subtree.  Now, it's right 
           subtree's turn */
            curr = curr->right;
            
        }

        return B;
    }
};

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->left->left->left = new Node (6);
    root->left->left->right = new Node (7);

    Solution s;

    vector<int> B = s.inOrderWithoutRecursion(root);

    for(int i=0; i<B.size();i++)
    {
        cout<<B[i]<<" ";
    }
    
    return 0;
}