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
    int target = flag - n;
    temp = head;
    while(temp!=NULL)
    {
        if(target == 0)
        {
            if(temp == head)
            {
                head = temp->next;
                free(temp); 
            }
            Node* dummyNode  = temp->next;
            temp->next = temp->next->next;
            free(dummyNode);
        }
        target--;
        temp = temp->next;
    }
    return head;
}


//OPTIMAL