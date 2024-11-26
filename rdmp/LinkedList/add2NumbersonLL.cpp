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

int n = 642;
while(n!=0)
{
    int num = n%10;
    Node temp = new Node(num, );
}