// https: //www.geeksforgeeks.org/?p=88

#include <iostream> 
#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

void fpush(Node **head, int newdata)
{
    Node *newnode = new Node;

    newnode->data = newdata;

    newnode->next = *head;

    *head = newnode;
}

void printList(Node *temp)
{
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int GetNth(Node *head, int index)
{
    Node *curr = head; 

    int cnt = 0;

    while(curr!=NULL)
    {
        if(cnt==index)
        {
            return (curr->data);
        }

        cnt++;
        curr = curr->next;
    }

    return -1;
}

int main()
{
    Node *head = NULL;
    fpush(&head, 1);
    fpush(&head, 3);
    fpush(&head, 6);
    fpush(&head, 2);
    fpush(&head, 1);
    fpush(&head, 7);

    printList(head);

    cout<<endl;

    int k = GetNth(head, 2);

    if(k==-1)
    {
        cout<<"Index doesn't exist";
    }
    cout << k;
    return 0;
}