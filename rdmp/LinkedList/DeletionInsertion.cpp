//Deletion and Insertion in Linked Lists

//Deletion
#include<bits/stdc++.h>
using namespace std;

class Node{
  int data;
  Node* next;

  public:
      Node(int data1, Node* next1)
      {
        data = data1;
        next1 = next;
      }
  public:
      Node(int data1)
      {
        data = data1;
        next = nullptr;
      }
}
Node* deleteHead(Node* head)
{
  //1. Deletion of Head of LL
// Logic: Just move the head from the first element to the second which will basically mean that the first element is no more in the LL as the head is not pointing to it.
  if(head==NULL)
  {
    return head;
  }
  Node* temp = head;
  head = head->next; //this is how you move a pointer to the next position. In this case the pointer is the head.
  //free(temp); //this will free up the space which stores the value of the old head.
  delete temp; //this can also be used to free up space.
  return head; 
}

Node* deleteTail(Node* head)
{
  //2. Deleting tail from the LL
  //Logic: To delete the tail you will first need to traverse to the tail.
  //Stop the mover before the last element and the second last element will then point to nullptr.
  if(head == nullptr || head->next == nullptr) //head being null means there is no elements in the LL and head->next equal to null means there is one element in LL.
  {
    return nullptr; 
  }
  //Now, to stop at the second last element. Our pointer has to stop when temp->next->next will be null. Because this will mean that we are at the 2nd last element.
   Node* temp = head;
   while(temp->next->next!=nullptr)
   {
    temp = temp->next;
   }
   delete(temp->next);
   return head;
   temp->next = nullptr;
}

Node* convertArrtoLL(vector<int>&arr)
{

}
int main ()
{
  vector<int>arr = {5,1,25,6,17};
  
}
