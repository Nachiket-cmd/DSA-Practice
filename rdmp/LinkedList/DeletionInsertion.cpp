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
   temp->next = nullptr;
   return head;
}

Node* deleteKthElement(Node* head, int k)
{
  if(head==NULL) return head;
  int count = 1;
  Node* temp = head;
  while(temp!= NULL) //this will basically check if we are still in the LL.
  {
    count++;
    if(count==k-1)
    {
      temp->next = temp->next->next;
      free(temp->next);
      break;
    }
    return head;
  }
}

Node* deleteElementele(Node* head, int ele)
{
  Node* temp = head;
  Node* prev = NULL;
  if(temp->data == ele) //array is of size 1 and element is the first one, i.e head.
  {
    free(temp);  
    return head;
  }
  while(temp!=NULL)
  { 
    if(temp->data == ele)
    {
      prev->next = prev->next->next;
      free(temp);
      break;
    }
    prev = temp;
    temp = temp->next;
  }
   return head;
}

Node* convertArrtoLL(vector<int>&arr)
{
 Node* head = new Node(arr[0]);
 Node* mover = head;
 for(int i = 1 ; i<arr.size() ; i++)
 { 
   Node* temp = new Node(arr[i]);
   mover->next = temp;
   mover = temp;
 }
 return head;
}
int main ()
{
  vector<int>arr = {5,1,25,6,17};
  Node* LL = convertArraytoLL(arr);
  Node* temp = LL;
  while(LL)
  {
    cout<<temp->data;
    temp = temp->next;
  }
  return 0;
}


//Insertion
Node* insertHead(Node* head,int val)
{
  Node* temp = new Node(val, head);
  return temp; 
}

Node* insertTail(Node* head, val)
{
  if(head == NULL) return new Node(val); //if the linked list is empty.
  Node* newNode = new Node(val)
  Node* temp = head;
  while(temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = newNode;
  return head;
}

Node* insertKpos(Node* head, k,val)
{
  if(head == NULL)
  {
    if(k==1)
    {
        return new Node(val);  //just create the node and insert it in the first place.
    } 
  }
  if(k==1). //which means head
  {
    Node* newNode = new Node(val);
    newNode->next = head;
    return newNode;
  }
  int count = 0;
  Node* temp = head;
  while(temp!=NULL) // this will cover all the remaining cases including the tail.
  {
    count++;
    if(count == k-1)
    {
      Node* newNode = new Node(val);
      newNode->next = temp->next;
      temp->next = newNode;
      return head;
    }
    temp = temp->next;
  }
  return head;
}
