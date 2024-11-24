//Doubly Linked List 

//What is Doubly Linked List?
/* 
A doubly linked list is just like Singly linked list. The only difference is its capability to move in 2 directions. 
In a singly linked list , we can only move forward in the linked list but once we have moved forward from any node, we cannot reference back to the previous
node. Now, in the case of a doubly linked list, we can move both ways, which is to and fro in both the directions. We store the pointer to the next and the 
previous node at the same time. 
*/

//Syntax for DLL in C++
class Node {
    int data;
    Node* next;
    Node* back;

    public:
        Node(int data1, Node* next1 , Node* back1)
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
}

Node* convertArrtoDLL(vector<int>&arr)
{
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i = 1; i < arr.size() ; i++)
    {
       Node* temp = new Node(arr[i]);
       prev->next = temp;
       temp->back = prev;
       prev = prev->next; //this will move the prev ahead. Keep this in mind you are forgetting this again and again.
    }
    return head;
}

Node* deleteHead(Node* head)
{
    if(head == NULL) //if the LL is empty
    {
        return NULL;
    }
    Node* temp = head->next;
    return temp;
}