/*Thought process and Logic behind Linked List
 - Arrays are fixed sized containers, in which we store elements in contiguous(simultaneous) locations,
 . It is stored in heap memory storage.
 - Arrays are easier to traverse index wise due to its contiguous memory allocation.
  What is Linked List?
  - LL are similar to vector, the only difference is that they are not stored in contiguous location.
  - This is the data structure which helps us to increase and decrease the size at will and is not fixed.
  HOW DOES IT DO THAT?
  - Linked lists are not stored in contiguous locations. 
  - You cannot iterate like arrays on this one.
  - They are dynamic and their size can be increased/decreased in any moment.
  - Along with the data in the memory, we also store the pointer to the next element.
  - Starting of Linked List: Head
  - End of Linked List: Tail (Pointer will point to nullptr) 
  - The last element will point to nullpointer(Tail of the Linked List).
  TO INCREASE THE SIZE OF THE LINKED LIST
  - Put the new element into the heap memory. 
  - The tail of the linked list was at null pointer, change that and point it to the new element memory location.
  - And the new last element will now point to null pointer.
  WHERE IS IT USED?
  - Used in Stack and Queue
  - We use it in a browser.
  - Struct and Class in C++ for Linked List (Preferably class because it then provides us with OOPS concepts)
  int x = 2;
  int* y = &x; //Storing a pointer to memory location of x.
  - so to store the value and the pointer to the next location together we will create a self defined
  datatype.
  struct Node {
  int data;
  Node* next; // This is Node* because the next LL will also be a Node Struct and this will store the address to it.
  Node(int data1,Node* next1) //This is the constructor which will be used to initialize a struct object.
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
    Node* head = new Node(arr[0],nullptr);
    cout<< head->next; //this will return nullptr as our next pointer is currently pointing to 0th index as it is the head of the LL.
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
   mover->next = temp; //this is to assign the pointer to the next location. Before the mover was pointing to nullptr.
   mover = temp; // this is to move the mover to the next element so that it can iterate further.
   
  }
 return head;
}

int sizeOfLL(Node* head)
{
 int count = 0;
  for(int i =1 ; i<arr.size() ; i++)
  {
   Node* temp = new Node(arr[i]);
   mover->next = temp; //this is to assign the pointer to the next location. Before the mover was pointing to nullptr.
   mover = temp; // this is to move the mover to the next element so that it can iterate further.
   count++;
  }
 return count;
}

Node* findElementLL(Node* head,int numToFind)
{
    Node* temp = head;
     while(temp!=nullptr) {
         if(temp->data == numToFind)
         {
             return temp->next;
         }
         temp = temp->next;
     }
     return 0;
}

int main()
{
    // Node* x = new Node(3,nullptr);
    // cout<< x->next;
    vector<int> arr={1,5,2,6,8};
    int num;
    Node* head = ConvertArrtoLL(arr);
    //The lines below are very important as this is how we will traverse throughout a Linked List.
    Node* temp = head;
     while(temp!=nullptr) {
         cout<<temp->data<<" ";
         temp = temp->next;
     }
     cout<<"Enter the number you want to find: "<<endl;
     cin>>num;
     Node* x = findElementLL(head,num);
     if(x!=0)
     {
         cout<<"The number if present at "<<x<<endl;
     }
     else{
         cout<<"The number is not present in the Linked List";
     }
    return 0;
}

