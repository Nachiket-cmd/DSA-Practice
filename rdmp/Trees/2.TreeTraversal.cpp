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
vector<vector<int>>Levelorder(Node* root)
{
   vector<vector<int>>ans;
   if(root == NULL) return ans;
   queue<Node*>q;
   while(!q.empty())
   {
    int size = q.size();
    vector<int>level;
    for(int i = 0 ; i<size ; i++)
    {
        Node *node = q.front();
        q.pop();
        if(node->left != NULL) q.push(node->left);
        if(node->right != NULL) q.push(node->right);
        level.push_back(node->data);
    }
    ans.push_back(level);
   }
   return ans;
}