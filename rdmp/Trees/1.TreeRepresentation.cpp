/* 
Binary Tree Representation in C++:
-This will be very similar to what we have done in linked list. We will use pointers, left ptr and right ptr to connect the nodes with each other basically. So, we will be using a struct Node which will store the 
data itself, a ptr to the left node and a ptr to the right side of the node.  
*/

//Basic Representation 
Struct Node{
  int data;
  Node* left;
  Node* right;


  Node*(int val)
    {
      data = val;
      left = NULL;
      right = NULL;
    }  
};

int main() 
{
  Struct Node* root = new Node(1); //this will make a root node
  root->left = new Node(3); //left side of the root node
  root->right = new Node(5); //right side of the root node
  root->left->right = new Node(7); //we can even add nodes further down like this. 
}
