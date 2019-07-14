// https: //www.geeksforgeeks.org/given-a-linked-list-which-is-sorted-how-will-you-insert-in-sorted-way/

// https : //www.geeksforgeeks.org/insertion-sort-for-singly-linked-list/

#include <iostream>
#include <bits/stdc++.h>

        using namespace std;

struct Node
{
    int data;
    Node *next;
};



class Solution
{
  public:
    Node * insertionSort(struct Node *head)
    {
        if(head==NULL)
        {
            return head;
        }

        if(head->next==NULL)
        {
            return head;
        }

        Node *sorted = NULL; 

        Node *list = head; 

        while(list!=NULL)
        {
            Node *curr = list; 

            list = list->next; 

            if(sorted==NULL || sorted->data > curr->data)
            {
                curr->next = sorted; 
                sorted = curr;
            }
            else 
            {
                Node *temp = sorted; 

                while(temp!=NULL)
                {
                    Node *s = temp; 
                    temp = temp->next; 

                    if(s->next == NULL || s->next->data > curr->data)
                    {
                        s->next = curr; 
                        curr->next = temp; 
                        break;
                    }
                }
            }
        }

        return sorted;

    }
    
     
    void printList(Node *head)
    {
        Node *temp = head;

        while (temp != NULL)
        {
            cout << temp->data << endl;
            temp = temp->next;
        }
    }

    void fpush(Node **head, int newdata)
    {
        Node *newnode = new Node;

        newnode->data = newdata;

        newnode->next = *head;

        *head = newnode;
    }
};

int main()
{
    Solution s;

    Node *head = NULL;

    s.fpush(&head, 5);
    s.fpush(&head, 20);
    s.fpush(&head, 4);
    s.fpush(&head, 3);
    s.fpush(&head, 30);

    s.printList(head);

    head = s.insertionSort(head);

    cout<<endl;

    s.printList(head);

    return 0;
}