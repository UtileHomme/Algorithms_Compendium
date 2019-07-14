// https : //www.interviewbit.com/problems/2sum-binary-tree/

// https : //www.geeksforgeeks.org/find-a-pair-with-given-sum-in-bst/

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

int twoSumBST(Node *A, int k)
{
    // Create two stacks. s1 is used for normal inorder traversal
    // and s2 is used for reverse inorder traversal
    stack<Node *> s1;
    stack<Node *> s2;

    int val1 = 0, val2 = 0;

    Node *curr1 = A, *curr2 = A;

    // Note the sizes of stacks is MAX_SIZE, we can find the tree size and
    // fix stack size as O(Logn) for balanced trees like AVL and Red Black
    // tree. We have used MAX_SIZE to keep the code simple

    // done1, val1 and curr1 are used for normal inorder traversal using s1
    // done2, val2 and curr2 are used for reverse inorder traversal using s2
    bool done1 = false, done2 = false;

    // The loop will break when we either find a pair or one of the two
    // traversals is complete
    while (1)
    {
        // Find next node in normal Inorder traversal.
        while (done1 == false)
        {

            if (curr1!= NULL)
            {
                s1.push(curr1);
                curr1 = curr1->left;
            }
            else
            {
                if (s1.empty())
                {
                    done1 = true;
                }
                else
                {
                    curr1 = s1.top();
                    s1.pop();

                    val1 = curr1->data;
                    curr1 = curr1->right;
                    done1 = true;
                }
            }
        }

        // Find next node in REVERSE Inorder traversal. The only
        // difference between above and below loop is, in below loop
        // right subtree is traversed before left subtree
        while (done2 == false)
        {

            if (curr2 != NULL)
            {
                s2.push(curr2);
                curr2 = curr2->right;
            }
            else
            {
                if (s2.empty())
                {
                    done2 = true;
                }
                else
                {
                    curr2 = s2.top();
                    s2.pop();

                    val2 = curr2->data;
                    curr2 = curr2->left;
                    done2 = true;
                }
            }
        }

        // If we find a pair, then print the pair and return. The first
        // condition makes sure that two same values are not added
        if ((val1 != val2) && (val1 + val2 == k))
        {
            return 1;
        }

        // If sum of current values is smaller, then move to next node in
        // normal inorder traversal
        else if (val1 + val2 < k)
        {
            done1 = false;
        }

        // If sum of current values is greater, then move to next node in
        // reverse inorder traversal
        else if (val1 + val2 > k)
        {
            done2 = false;
        }

        // If any of the inorder traversals is over, then there is no pair
        // so return false
        if (val1 >= val2)
        {
            return 0;
        }
    }
}

int main()
{
    Node *root = newNode(7);
    root->left = newNode(4);
    root->right = newNode(9);
    root->left->left = newNode(1);
    root->left->right = newNode(5);
    root->right->left = newNode(10);

    int k = twoSumBST(root, 6);

    cout << k;

    return 0;
}

// Time Complexity - O(n)

// Space Complexity - O(logn)
