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
}
//BRUTE FORCE   TC - O(2n)  SC- O(1)
Node* deleteNfromEnd(Node* head, int n)
{
    Node* temp = head;
    int flag = 0;
    while(temp!=NULL)
    {
        flag++;
        temp = temp->next;
    }
    if(n == flag)
    {
        Node* newHead = head->next;
        delete(head);
        return newHead; 
    }

    int target = flag - n;
    temp = head;
    while(temp!=NULL)
    {
        target--;
        if(target == 0)
        {
            break;
        }
        temp = temp->next; 
    }
    Node* delNode = temp->next;
    temp->next = temp->next->next;
    delete(temp);
    return head;
}


//OPTIMAL SOLUTION.   TC - O(N)   SC- O(1)
/*What is the concept about?
// We can use the concept of fast and slow pointers. 
- We will take 2 pointers, fast and slow.
- Start with fast pointer at head.
- First move the fast pointer n(here n is the n position) nodes.
- Then take another pointer slow which will point towards head.
- Now, our slow pointer is at head and fast pointer is at nth node.
- Now, move both pointers at the same time.
- When our fast pointer will reach tail, our slow pointer will automatically be at the nth position from end. */

Node* delNfromEnd (Node* head, int n)
{
    Node* fast = head;
    for(int i = 0 ; i<n ;i++)
    {
        fast = fast->next;
    }
    if(fast == NULL) return head->next; //If we have been asked to delete the head
    Node* slow = head;
    while(fast != NULL)
    {
        fast = fast->next;
        slow = slow->next;
    }
    Node* delNode = slow->next;
    slow->next = slow->next->next;
    free(delNode);
    return head;
}