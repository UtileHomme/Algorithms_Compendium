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

        Node *p = root; 

        while(!s.empty() || p!=NULL)
        {
            if(p!=NULL)
            {
                s.push(p);
                B.insert(B.begin(),p->data);

                p = p->right;

            }
            else 
            {
                Node *node = s.top();
                s.pop();
                p = node->left;
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
