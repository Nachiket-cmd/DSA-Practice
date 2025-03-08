class Node {

   public:
    int data;
    Node* left;
    Node* right;

   public:
     Node(int data1)
     {
        data = data1;
        left = NULL;
        right = NULL;
     }

};


//Recursive Traversals
void DFSpreOrderRecursive(Node* root) 
{
    Node* node = root;
    if(node == NULL) return;
    print(node->data);
    DFSpreOrderRecursive(node->left);
    DFSpreOrderRecursive(node->right);
}

void DFSinOrderRecursive(Node* root) 
{
    Node* node = root;
    if(node == NULL) return;
    DFSinOrderRecursive(node->left);
    print(node->data);
    DFSinOrderRecursive(node->right);
}

void DFSpostOrderRecursive(Node* root) 
{
    Node* node = root;
    if(node == NULL) return;
    DFSpostOrderRecursive(node->left);
    DFSpostOrderRecursive(node->right);
    print(node->data);
}


//Iterative Traversals
vector<int> DFSpreorderIterative(Node* root)
{
  vector<int>traversal;
  if(root == NULL) return;
   Node* node = root;
   stack<Node*>st;
   st.push(node);
   while(!st.isEmpty())
   {
    node = st.top();
    st.pop();
    traversal.push_back(node->data);
    if(node->left != NULL) st.push(node->left);
    if(node->right != NULL) st.push(node->right);
   }
   
}

vector<int> DFSinorderIterative(Node* root)
{
   if(root == NULL) return -1;
   vector<int>ans;
   Node* node = root;
   stack<Node*>st;
   st.push(node);
   while(!st.isEmpty())
   {
    if(node->left != NULL)
    {
        st.push(node->left);
        node = node->left;
    }
    else 
    {
      node = st.top();
      ans.push_back(node);
      st.pop();
      if(node->right != NULL)
      {
        node = node->right;
      }
    }
   }
}

vector<int> DFSpostorderIterative(Node* root)
{
    if(root == NULL) return -1;
    Node* node = root;
    stack<Node*>st;
    st.push(node);
    while(!st.isEmpty() && node->right != NULL)
    {
       if(node->left != NULL)
       {
         st.push(node->left);
         node = node->left;
       }

       else{
        node = st.top()->right;
        if(node->right == NULL  || )
        {
          node = st.top();
          DFSans.push_back(node);
          st.pop();
        }
       }
    }
}



