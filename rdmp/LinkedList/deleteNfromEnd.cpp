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
//BRUTE FORCE
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


//OPTIMAL SOLUTION
// We can use the concept of fast and slow pointers. 
/* */