// https : //www.interviewbit.com/problems/min-depth-of-binary-tree/

// https : //www.geeksforgeeks.org/find-minimum-depth-of-a-binary-tree/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

struct queueItems 
{
    Node *node;
    int depth;
};

Node *newNode(int data)
{
    Node *root = new Node;
    root->data = data;
    root->left = NULL;
    root->right = NULL;

    return root;
}

int minDepth(Node *root)
{
    // Corner case. Should never be hit unless the code is called on root = NULL
    if (root == NULL)
    {
        return 0;
    }

    //the queue contains the entire structure in one cell
    queue < queueItems> q;

    // Enqueue Root and initialize depth as 1
    queueItems qi = {root, 1};

    q.push(qi);

    while(q.empty()==false)
    {
        //pop the first cell which contains the root and its depth in the first iteration
        qi = q.front();

        q.pop();

        Node *node = qi.node; 
        int depth = qi.depth; 

        if(node->left == NULL && node->right==NULL)
        {
            while(!q.empty())
            {
                cout<<qi.node->data;
                cout<<qi.depth;

                cout<<endl;

                q.pop();
            }
            
            return depth;
        }

        if(node->left!=NULL)
        {
            qi.node = node->left; 
            qi.depth = depth+1; 

            q.push(qi);
        }

        if(node->right!=NULL)
        {
            qi.node = node->right;
            qi.depth = depth + 1;
            q.push(qi);
        }
    }

    return 0;

}

int main()
{
    Node *root = newNode(7);
    root->left = newNode(4);
    root->right = newNode(9);
    root->left->left = newNode(1);
    root->left->right = newNode(5);

    int k = minDepth(root);

    cout << k;

    return 0;
}

// Time Complexity - O(n)
