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

        vector <int> B;

        s.push(root);

        while(!s.empty())
        {
            Node *pNode = s.top();

            if(pNode->left!=NULL)
            {
                s.push(pNode->left);

                pNode->left = NULL;
            }
            else 
            {
                B.push_back(pNode->data);

                s.pop();

                if(pNode->right!=NULL)
                {
                    s.push(pNode->right);
                }
            }
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