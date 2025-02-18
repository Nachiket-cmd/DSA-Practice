/*We will now learn about the iterative traversal of BT*/

//Preorder Traversal (Root Left Right)
void PreOrderIterative(Node* root)
{
    if(root == NULL) return;
    stack<Node*>st;
    st.push(root);
    while(!=st.empty())
    {
        Node *node = st.top();
        st.pop(node);
        print(node->data);
        if(node->right != NULL) st.push(node->right);
        if(node->left != NULL) st.push(node->left);
    }
}
//If we want to store the preorder traversal, we can simply do so by storing the order instead of directly printing them into a vector.

//Inorder Traversal (Left Root Right)
void InorderIterative(Node* root)
{
    stack<Node*>st;
    Node* node = root;
    while(true) {
        if(node!=NULL) {
            st.push(node);
            node = node->left;
        }
        else {
            if(st.empty() == true) break;
            node = st.top();
            st.pop();
            print(node->data);
            node = node->right;
        }
    }
}