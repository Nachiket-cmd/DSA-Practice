class Node{
    int data;
    Node* next;

    Node(int data1, Node* next1)
    {
        data = data1;
        next = next1;
    }
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
}

Node* sortZeroOneTwo(Node* head)
{
     if(head == NULL || head->next == NULL) return head;

     Node* zeroHead = new Node(-1);
     Node* zero = zeroHead;
     Node* oneHead = new Node(-1);
     Node* one = oneHead;
     Node* twoHead = new Node(-1);
     Node* two = twoHead;

     Node* temp = head;
     while(temp!= NULL)
     {
         if(temp->data == 0)
         {
            zero->next = temp;
            zero = temp;
         }
         else if(temp->data == 1)
         {
            one->next = temp;
            one = temp;
         }
         else if(temp->data == 2)
         {
            two->next = temp;
            two = temp;
         }
         temp = temp->next;
     }
     zero->next = (oneHead->next)?oneHead->next:twoHead->next;
     oneHead->next = twoHead->next;
     delete(zero);
     delete(one);
     delete(two);
     return zeroHead->next;
}