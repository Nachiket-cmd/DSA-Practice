#include<bits/stdc++.h>
class Node {
   public:
    int data;
    Node* next;

   public:
    Node(int data1, Node* next1)
    {
        data = data1;
        next = next1;
    }

    public:
     Node(int data1)
     {
        data = data1;
        next = nullptr;
     }
};

//Brute Force (TC - O(2n) SC - O(n))
Node* reverseSingleLLBrute(Node* head)
{ 
   Node* temp = head;
   stack<int>st;
   while(temp!=NULL)
   {
     st.push(temp->data);
     temp = temp->next;
   }  
   temp = head;
   while(st)
   {
    temp->data = st.top();
    st.pop();
    temp = temp->next;
   }
   return head;
}

//Iterative Method of Solving this (TC - O(n) SC - O(1))
Node* reverseSingleLLMyWay(Node* head)
{
    Node* prevNode = NULL;
    Node* temp = head;
    while(temp != NULL)
    {
        Node* front = temp->next;
        temp->next = prevNode;
        prevNode = temp;
        temp = front;
    }
    return prevNode;
}