// http://www.geeksforgeeks.org/search-an-element-in-a-linked-list-iterative-and-recursive/


#include <iostream>

using namespace std;

struct Node
{
    int data ;
    Node *next;
};

void Fpush(Node **head, int newdata)
{
    //create a New Node
    Node *newnode = new Node();

    //assign the data passed in the function to the Newnode data field
    newnode->data = newdata;

    //pass the value of the "present" head, into the Newnode next field
    newnode->next = *head;

    //assign the address of the head as that of the newnode so that it can come in the front
    *head = newnode;
}

bool search(Node *temp, int key)
{
    //till we reach the end of the Linked list or the Head itself is NULL
    while(temp!=NULL)
    {
        //if key is found, return true
        if(temp->data==key)
        {
            return true;
        }
        temp = temp->next;
    }

    return false;
}

int main()
{
    Node *head = NULL;

    Fpush(&head, 1);
    Fpush(&head, 3);
    Fpush(&head, 2);
    Fpush(&head, 4);
    Fpush(&head, 5);

    int key = 6;

    // result returned from above
    bool output = search(head,key);

    if(output == true)
    {
        cout<<"element found";
    }
    else
    {
        cout<<"element not found";
    }

}
