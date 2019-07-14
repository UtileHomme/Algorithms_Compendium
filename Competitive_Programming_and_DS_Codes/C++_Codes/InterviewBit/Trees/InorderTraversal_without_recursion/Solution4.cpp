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
       

        vector <int> B;

        Node * curr = root; 

        Node * pre;

        while(curr!=NULL)
        {
            if(curr->left==NULL)
            {
                B.push_back(curr->data);
                curr = curr->right;
            }
            else 
            {
                pre = curr->left; 

                while(pre->right!=NULL)
                {
                    pre = pre->right;
                }

                pre->right = curr; 

                Node *temp = curr; 

                curr = curr->left; 

                temp->left = NULL;
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