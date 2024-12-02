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
//Question: You will be given two Linked Lists, with the input numbers in reversed order. You are supposed to add these two numbers and give a resultant linked list
//which contains the sum of both the number in the same reversed order.
//*****PRO TIP:- Whenever we need to create a new NodeList and perform some operations, always choose the dummyNode concept. *****/

Node* add2Numbers(Node* LL1, Node* LL2)
{
    Node* dummyNode = new Node(-1);
    Node* temp = dummyNode;
    Node* temp1 = LL1;
    Node* temp2 = LL2;
    int carry = 0;

   while(temp1->next != NULL || temp2->next != NULL)
   {
     int currSum = carry;
     if(temp1 != NULL) currSum += temp1->data;
     if(temp2 != NULL) currSum += temp2->data;

     Node* newNode = new Node(currSum%10);
     carry = currSum/10;

     temp->next = newNode;
     temp = temp->next;

     if(temp1) temp1 = temp1->next;
     if(temp2) temp2 = temp2->next;
   }
   if(carry) {
    Node* newNode = new Node(carry);
    temp->next = newNode;
   }
   return dummyNode->next;
}

