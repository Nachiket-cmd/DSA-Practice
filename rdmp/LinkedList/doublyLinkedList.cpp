//Doubly Linked List 

//What is Doubly Linked List?
/* 
A doubly linked list is just like Singly linked list. The only difference is its capability to move in 2 directions. 
In a singly linked list , we can only move forward in the linked list but once we have moved forward from any node, we cannot reference back to the previous
node. Now, in the case of a doubly linked list, we can move both ways, which is to and fro in both the directions. We store the pointer to the next and the 
previous node at the same time. 
*/

//Syntax for DLL in C++

#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node* back;

    public:
    Node(int data1, Node* next1 , Node* back1)
     {
            data = data1;
            next = next1;
            back = back1;
     }

    public:
    Node(int data1)
     {
            data = data1;
            next = nullptr;
            back = nullptr;
     }
};

Node* convertArrtoDLL(vector<int>&arr)
{
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i = 1; i < arr.size() ; i++)
    {
       Node* temp = new Node(arr[i]);
       prev->next = temp;
       temp->back = prev;
       prev = prev->next; //this will move the prev ahead. Keep this in mind you are forgetting this again and again.
    }
    return head;
}

void print(Node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head = head->next; //why do you always forget to move ahead GDMT!
    }
} 

//Deletion
Node* deleteHead(Node* head)
{
    if(head == NULL || head->next == NULL) //if the LL is empty
    {
        return NULL;
    }
   Node* temp = head;
   head = head->next;
   head->back = nullptr;
   temp->next = nullptr;
   delete temp;
   return head;
}

Node* deleteTail(Node* head) 
{
 if(head==NULL || head->next==NULL)
 {
    return NULL;
 }
  Node* temp = head;
  while(temp->next != NULL)
  {
    temp=temp->next;
  }
  temp->back->next = nullptr;
  temp->back = nullptr;
  free(temp);
  return head; 
}

Node* deleteKthele(Node* head,int k)
{
  if(head == NULL)
  {
        return NULL;
  }
  Node* temp = head;
  int count = 0;
  while(temp!= NULL)
  {
    count++;
    if(count == k)
    {
      break;
    }
    temp=temp->next;
  }
  Node* prev = temp->back;
  Node* front = temp->next;
  if(prev == NULL && front == NULL) return NULL;
  else if(front == NULL)
  {
    return deleteTail(head);
  }
  else if(prev==NULL)
  {
    return deleteHead(head);
  }
  prev->next = front;
  front->back = prev;
  temp->next = nullptr;
  temp->back = nullptr;
  free(temp);
  return head;
}

//Insertion
Node* insertBeforeHead(Node* head,int val)
{
  Node* temp = new Node(val,head,nullptr);
  head->back = temp;
  return temp;
}

Node* inserBeforeTail(Node* head, int val)
{
    if(head->next == NULL) return new Node(val,head,nullptr);
    else if(head == NULL)  return new Node(val);
    Node* temp = head;
    while(temp != NULL)
    {
        temp = temp->next;
    }
    Node* prev = temp->back;
    Node* newNode = new Node(val,temp,prev);
    temp->back = newNode;
    prev->next = newNode; 
    return head;
}

int main()
{
    vector<int>arr = {3,7,2,8,4,9};
    Node* head = convertArrtoDLL(arr);
    print(head);
    return 0;
}