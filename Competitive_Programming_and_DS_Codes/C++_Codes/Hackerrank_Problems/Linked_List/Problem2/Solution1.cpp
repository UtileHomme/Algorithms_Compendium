/*
  Insert Node at the end of a linked list
  head pointer input could be NULL as well for empty list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
  // Complete this method
    if(head==NULL)
    {
        //in this case, we need to create a new node
        Node *node = new Node;

        //assign it to head
        head = node;

        //update the data and address part of that head
        head->data = data;
        head->next = NULL;

    }
    else
    {
        //add a new node
        Node *node = new Node;

        //add the necessary data in that node
        node->data = data;
        node->next = NULL;

        //assign the address of head to a new variable
        Node *temp = head;

        //while the address part of the current temp is not NULL, continue moving to the next temp
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }

        //after the penultimate node is acquired, add the new node address into the temp address part
        temp->next = node;


    }
    return head;
}
