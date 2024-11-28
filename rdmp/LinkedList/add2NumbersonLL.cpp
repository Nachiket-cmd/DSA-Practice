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
    Node* temp1 = LL1;
    Node* temp2 = LL2;
    int carry =0;
    int 
    while(temp1!=NULL || temp2!=NULL)
}

