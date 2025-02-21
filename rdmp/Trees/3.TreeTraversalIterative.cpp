/*We will now learn about the iterative traversal of BT*/

//Preorder Traversal (Root Left Right)
void PreOrderIterative(Node* root)
{
    if(root == NULL) return;
    stack<Node*>st;
    st.push(root);
    while(!=st.empty())
    {
        Node* node = st.top();
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
            node = st.top(); //this will work because it will again go to NULL and then st.top will be the element above the prev one in the stack
            st.pop();
            print(node->data);
            node = node->right;
        }
    }
}


//PostOrder Traversal Iterative using 2 Stacks
// Left Right Root
void PostOrderIterative2Stack(Node* root)
{
    stack<Node*>st1;
    stack<Node*>st2;
    Node* node = root;
    while(true)
    {
        if(node!=NULL)
        {
         st1.push(node);
         if(node->left != NULL) node = node->left;
        }
        else{
         if(st1.empty())break;
         node = st1.top();
         if(node->right != NULL) st1.push(node->right);
         st1.pop();
         st2.push(node);
         node = st.top();
    }

    while(st2.empty()
    {
        print(st2.top());
        st2.pop();
    }

})
}



