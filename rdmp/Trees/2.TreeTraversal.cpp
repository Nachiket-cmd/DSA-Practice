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
    if(node->left == NULL) 
    {
      print(node);
      return; 
    }
    Inorder(node->left);
    Inorder(node->right);
}