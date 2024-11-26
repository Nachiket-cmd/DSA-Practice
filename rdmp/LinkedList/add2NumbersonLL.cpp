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
//*****PRO TIP:- Whenever we need to create a new NodeList and perform some operations, always choose the dummyNode concept. *****/

