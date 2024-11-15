//Deletion and Insertion in Linked Lists

//1. Deletion of Head of LL
// Logic: Just move the head from the first element to the second which will basically mean that the first element is no more in the LL as the head is not pointing to it.

Node* deleteHead(Node* head)
{
  if(head==NULL)
  {
    return head;
  }
  Node* temp = head;
  head = head->next; //this is how you move a pointer to the next position. In this case the pointer is the head.
  free(temp); //this will free up the space which stores the value of the old head.
  delete temp; //this can also be used to free up space.
  return head;
}
