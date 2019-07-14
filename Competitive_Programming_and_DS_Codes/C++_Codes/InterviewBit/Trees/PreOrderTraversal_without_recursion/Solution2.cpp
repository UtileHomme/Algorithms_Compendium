// https: //www.interviewbit.com/problems/preorder-traversal/

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

        while(root!=NULL || s.size()!=0)
        {
            if(root==NULL)
            {
                root= s.top();
                s.pop();
            }
            else 
            {
                B.push_back(root->data);

                if(root->right!=NULL)
                {
                    s.push(root->right);
                }

                root = root->left;
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

    vector<int> B = s.preOrderWithoutRecursion(root);

    for(int i=0; i<B.size();i++)
    {
        cout<<B[i]<<" ";
    }
    
    return 0;
}
