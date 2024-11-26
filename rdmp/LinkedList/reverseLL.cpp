class Node{
 public:
    int data;
    Node* next;
    Node* back;

 public:
    Node(int data1,Node* next1, Node* back1)
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

//Implementation 1: The Naive Way
//We can just simply swap the data stored inside each node from last to first and make it work.
//We can use a stack as it uses LIFO. we can push the elements inside the Stack and when we pop them, they will come out in reverse order.
Node* temp = head;
stack<int>st;
while(temp != NULL)
{
    st.push(temp->data);
    temp = temp->next;
} 

temp = head;
while(temp != NULL)
{
    temp->data = st.top();
    st.pop();
    temp = temp->next;
}
return head;

//My stupid approach 
Node* reverseLL(Node* head)
{
    Node* temp = head;
    while(temp!=NULL)
    {
        temp = temp->next;
    }
    head = temp;
    Node* moverL = temp;
    Node* moverR = temp;
    while(mover->back != NULL)
    {
        moverL->back = moverR->next;
        moverL = moverL->back;
        moverR = moverR->next;
    }
    return head;   
}

//Swapping the links. What we can do is, we can simply swap the links of each node which will make it reversed. It means that the next link will become back and vice versa.
//This is the best case as we are solving this case in a single pass. TC - O(n)
Node* reverseDLL(Node* head)
{
    if(head == NULL || head->next == NULL) return NULL;

    Node* current = head;
    Node* prev = NULL;
    while(current != NULL)
    {
       prev = current->back;
       current->back = current->next;
       current->next = prev;
       current = current->back;
    }
    return prev->back;
}

