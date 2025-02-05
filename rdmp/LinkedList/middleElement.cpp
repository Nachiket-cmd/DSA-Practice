class Node {
    public:
      int data;
      Node* next;
      Node* prev;

    public:
     Node*(int data1, Node* next1, Node* prev1)
     {
        data = data1;
        next = next1;
        prev = prev1;
     }

    public:
     Node(int data1)
     {
        data = data1;
        next = nullptr;
        prev = nullptr;
     }
};

/* Problem Statement:
Find the middle element of a linked list(single). By middle element, it means the (n+1)/2 the node of the LL.
My Solution(Naive)
Just traverse till the end of the LL and find the number of elements in it and then traverse again till the (n+1)/2th element of the linked list.*/ 
Node* middleElement(Node* head)
{
  int count = 0;
  Node* temp = head;
  while(temp->next != NULL)
  {
    count++;
  }
  int midELe = (count+1)/2;
  temp = head;
  while(midEle!=0)
  {
    midELe--;
    temp = temp->next;
  }
  return temp;
}


/*Much better solution:
Tortoise and Hare Algorithm
We will basically take two pointers, slow and fast and move both of them at the same time. The slow pointer will move one step at a time and the fast pointer will
take two steps at a time. So, when the fast pointer will reach at the tail of the LL, the slow pointer will automatically be in the middle of the LL. And there you
have it.
*/

Node* middleELe(Node* head)
{
  Node* slow = head;
  Node* fast = head;
  while(fast->next != NULL || fast != NULL)
  {
     slow = slow->next;
     fast = fast->next->next;
  }
  return slow;
}
