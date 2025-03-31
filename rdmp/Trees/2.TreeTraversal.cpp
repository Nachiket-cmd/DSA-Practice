/*Tree Traversal Techniques:
1. DFS(Depth First Search)
   Depth First has three types of traversals:
   Inorder, Pre-order and Post-order

   Inorder(Left Root Right): We can remember this by the position of the root. Inorder(root is in between)
   Pre-order(Root Left Right): We can remember this by the position of the root. Pre(root is before)
   Post-order(Left Right Root): We can remember this by the position of the root. Post(root is after)

2. BFS(Breadth First Search)
   It is simple. It simply goes level wise. Which is basically level order traversal
 */
struct Node {
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

void print(node)
{
    cout<<node->data;
}

int main() 
{
    Node* root = new Node(2);

}

//Preorder (DFS)
void preorder(node)
{
    if(node == NULL) return;

    print(node);
    preorder(node->left);
    preorder(node->right);
}


//Inorder (DFS)
void Inorder(node)
{
    if(node == NULL) return;
    Inorder(node->left);
    print(node);
    Inorder(node->right);
}

//Preorder (DFS)
void Preorder(node)
{
    if(node->data == NULL) return;
    print(node);
    Preorder(node->left);
    Preorder(node->right); 
}

//Postorder (DFS)
void Postorder(node)
{
    if(node->data == NULL) return;
    Postorder(node->left);
    Postorder(node->right);
    print(node);
}


//Levelorder (BFS). TC - O(n) SC - O(n)
/*This is what BFS is all about.
We will be using a queue for level order traversal. ans is used as a vec<vec>> to store the answer and return it. The rest of the logic can be understood by 
going through the code.*/
vector<vector<int>>Levelorder(Node* root)
{
   vector<vector<int>>ans;  //making a vector to store the level order.
   if(root == NULL) return ans; // if the BT is empty, simply return nothing.
   queue<Node*>q; // queue to traverse through every level.
   q.push(root);
   while(!q.empty()) // when the queue will be empty, it means that we have traversed the entire BT.
   {
    int size = q.size();  // the size will be used to traverse that many times in the loop, which will tell us about how many elements are there in the level.
    vector<int>level;   // vector to store each level.
    for(int i = 0 ; i<size ; i++) 
    {
        Node* node = q.front(); //we will start from front as FIFO and we will go from left to right like a BT
        q.pop();
        if(node->left != NULL) q.push(node->left);
        if(node->right != NULL) q.push(node->right);
        level.push_back(node->data);
    }
    ans.push_back(level);
   }
   return ans;
}


<vector<vector<int>>LvlOrder(Node* root)
{
    if(root == NULL) return 0;
    queue<Node*>q;
    q = root;
    <vector<vector<int>>ans;
    while(!q.empty())
    {
        vector<int>level;
        int size = q.size();
        for(int i = 0 ; i<size ; i++)
        {
            Node* node = q.front();
            q.pop();
            if(node->left != NULL) q.push(node->left);
            if(node->right != NULL) q.push(node->right);
            level.push_back(node->data);
        }
        ans.push_back(level);
    }
    return ans;
}
