//Problem: You will be given a SLL and you have to move all the elements in odd places to the left and even ones to the right. 

#include<bits/stdc++.h>
using namespace std;
class Node{
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

//Brute Force Soln:
/* 
- We can take a temp node and move start it from head.
- We will move the temp node by two places so that we get access to each odd element.
- Put those elements into a new LL. This will take n/2 iterations. 
- After this, start temp from head->next, which will be 2 index.
- traverse through the even indexed elements the same way and go through the last of the LL.
- At Last, put all those elements back into the the original LL.*/


Node* oddEvenLL(Node* head)
{
    Node* temp = head;
    vector<int>arr;
    while(temp != NULL && temp->next != NULL)
    {
        arr.push_back(temp->data);
        temp = temp->next->next;
    }
    if(temp == NULL ) //if the size of LL is odd, we might miss out the last element because of the 2nd condn in while loop. To include that condition we will do this.
    {
        arr.push_back(temp->data);
    }

    temp = head->next;
    while(temp != NULL && temp->next != NULL)
    {
        arr.push_back(temp->data);
        temp = temp->next->next;
    }

    temp = head;
    for(int i = 1 ; i<arr.size() ; i++)
    {
        temp->data = arr[i];
        temp = temp->next;
    }
    return head;
}

//Optimal Soln.
//We can simply change the links of the nodes in such a way that the odd nodes directly connect to its next odd node. After we are done with the odd nodes
//We will do the same for even nodes. Lastly, we will link the last odd node with the first even node. 

Node* oddEvenLLBetter(Node*head)
{
    Node* temp = head;
    while(temp!=NULL && temp->next!=NULL)
    {
        temp->next = temp->next->next;
        temp = temp->next->next;
    }
    if(temp) temp->next = temp->next->next;
    Node* temp1 = temp;

    //For even now
    temp = head->next;
    Node* temp2 = temp;
    while(temp!=NULL && temp->next!=NULL)
    {
        temp->next = temp->next->next;
    }

    temp1->next = temp2;
    return head;
}