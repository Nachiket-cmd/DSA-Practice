/*Thought process and Logic behind Linked List
 - Arrays are fixed sized containers, in which we store elements in contiguous(simultaneous) locations,
 . It is stored in heap memory storage.
 - Arrays are easier to traverse index wise due to its contiguous memory allocation.
  What is Linked List?
  - This is the data structure which helps us to increase and decrease the size at will and is not fixed.
  HOW DOES IT DO THAT?
  - Linked lists are not stored in contiguous locations. 
  - You cannot iterate like arrays on this one.
  - They are dynamic and their size can be increased in any moment.
  - Along with the data in the memory, we also store the pointer to the next element.
  - Starting of Linked List: Head
  - End of Linked List: Tail
  - The last element will point to nullpointer(Tail of the Linked List).
  TO INCREASE THE SIZE OF THE LINKED LIST
  - Put the new element into the heap memory. 
  - The tail of the linked list was at null pointer, change that and point it to the new element memory location.
  - And the new last element will now point to null pointer.
  WHERE IS IT USED?
  - Used in Stack and Queue
  - We use it in a browser.
  - Struct and Class in C++ for Linked List
  int x = 2;
  int* y = &x; //Storing a pointer to memory location of x.
  - so to store the value and the pointer to the next location together we will create a self defined
  datatype.
  struct Node {
  int data;
  Node* next;
  Node(data1,next1)
  {
   data = data1;
   next = next1; 
  }
  }
*/
#include<bits/stdc++.h>
using namespace std;
//creating your own datatype for LL
struct Node {
    public:
    int data;
    Node* next;
    
    //Initializing a Constructor.
    //Constructor is a special type of member function which is used to initialize the object
    public:
    Node(int data1, Node* next1)
    {
        data = data1;
        next = next1;
    }
};

int main() 
{
    vector<int>arr = {2,5,1,2,7};
    Node* y = new Node(arr[0],nullptr);
    cout<< y->next;
    return 0;
}


//Now we will do the same thing but with class instead of struct because struct doesnt offer OOPS concepts like abstraction, encapsulation etc.

#include<bits/stdc++.h>
using namespace std;
//creating your own datatype for LL
class Node {
    public:
    int data;
    Node* next;
    
    //Initializing a Constructor.
    //Constructor is a special type of member function which is used to initialize the object
    public:
    Node(int data1, Node* next1)
    {
        data = data1;
        next = next1;
    }
};

int main() 
{
    vector<int>arr = {2,5,1,2,7};
    Node* y = new Node(arr[0],nullptr);
    cout<< y->next;
    return 0;
}


//Difference between Node and Node* - Node will refer to the value in the address space Node whereas
//Node* will point to the address of the Memory space Node.

//How to convert an array to a LL.
/* Head will always point to the first element. */
Node* convertArraytoLL(vector<int>&arr) {  //We cannot return the entire linked list thats why we will 
 //return the head (Node*)
 Node* head = new Node(arr[0]);
 Node* mover = head;
 for(int i =1 ; i<arr.size() ; i++)
  {
   Node* temp = new Node(arr[i]);
   mover->next = temp;
   mover = temp;
  }
 return head;
}

int main() {
 vector<int>arr = {12,8,5,3};
 Node* head = convertoLL(arr);
 cout<<head->data;
}
