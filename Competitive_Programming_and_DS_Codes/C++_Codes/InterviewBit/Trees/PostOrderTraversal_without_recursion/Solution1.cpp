// https://www.interviewbit.com/problems/postorder-traversal/

// https: //www.geeksforgeeks.org/iterative-preorder-traversal/

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

    vector <int> preOrderWithoutRecursion(Node *root)
    {
        
        stack <Node *> s; 


        vector <int> B;

        if(root==NULL)
        {
        return B;
        }

        s.push(root);

        while(!s.empty())
        {
            Node *node = s.top();

            B.push_back(node->data);

            s.pop();

            if(node->left)
            {
                s.push(node->left);
            }

            if (node->right)
            {
                s.push(node->right);
            }
        }

        reverse(B.begin(), B.end());

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

    vector<int> B = s.preOrderWithoutRecursion(root);

    for(int i=0; i<B.size();i++)
    {
        cout<<B[i]<<" ";
    }
    
    return 0;
}
