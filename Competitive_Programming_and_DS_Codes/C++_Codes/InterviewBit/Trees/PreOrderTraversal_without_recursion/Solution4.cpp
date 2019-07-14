// https: //www.interviewbit.com/problems/preorder-traversal/

// https : //www.geeksforgeeks.org/morris-traversal-for-preorder/

// https : //leetcode.com/problems/binary-tree-preorder-traversal/solution/

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
        
        vector <int> B;

        Node * node = root; 

        while(node!=NULL)
        {
            if(node->left==NULL)
            {
                B.push_back(node->data);
                node = node->right;
            }
            else 
            {
                Node *pre = node->left;

                while((pre->right!=NULL) && (pre->right!=node))
                {
                    pre = pre->right;
                }

                if(pre->right==NULL)
                {
                    B.push_back(node->data);
                    pre->right = node; 
                    node = node->left;
                }
                else 
                {
                    pre->right = NULL;
                    node = node->right;
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

    vector<int> B = s.preOrderWithoutRecursion(root);

    for(int i=0; i<B.size();i++)
    {
        cout<<B[i]<<" ";
    }
    
    return 0;
}
