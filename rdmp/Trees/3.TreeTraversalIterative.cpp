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
/*For this, you are always getting confused that why are we taking the right first and then the left. Keep in mind that postorder is all about 
Left Right Root, and Stack is LIFO. So, we put right first as left will be the first one popping out of the stack.*/
// Left Right Root
// void PostOrderIterative2Stack(Node* root)
// {
//     stack<Node*>st1;
//     stack<Node*>st2;
//     Node* node = root;
//     while(true)
//     {
//         if(node!=NULL)
//         {
//          st1.push(node);
//          if(node->left != NULL) node = node->left;
//         }
//         else{
//          if(st1.empty())break;
//          node = st1.top();
//          if(node->right != NULL) st1.push(node->right);
//          st1.pop();
//          st2.push(node);
//          node = st.top();
//     }

//     while(st2.empty()
//     {
//         print(st2.top());
//         st2.pop();
//     }

// })
// }

/*The basic idea is to use 2 stacks st1 and st2. We will first insert the root into st1. 
- Pop the top of st1(root in this case).
- Check if the popped element has anything in its left and then right side. If yes push it into st1.
- If the element at st1.top(node) is NULL. we will simply pop it out and as in the same wzy as we did before. After this again point node to st1.top
- The moment our st1 will be empty. It will mean that we are done with the postorder traversal.*/
void PostOrderIterative2Stack(Node* root)
{
    if(root == NULL) return;
    stack<Node*>st1;
    stack<Node*>st2;
    Node* node = root;
    st1.push(node);
    while(true)
    {
        if(node != NULL)
        {
            st1.pop();
            if(node->left != NULL) st1.push(node->left);
            if(node->right != NULL) st1.push(node->right);
            st2.push(node);
        }
        else {
            if(st1.isEmpty()) break;
        }
        node = st1.top();
    }

    while(st2.empty())
    {
      node = st2.top();
      st2.pop();
      cout<<node->data;
    }
    return 0;
}


//Post Order Iterative Using one stack.
//My Initial thought is that we can make the traversal as Root Right Left and push the elements into the stack in this manner.

void PostOrderIterative1Stack(Node* root)
{
    if(root == NULL) return;
    stack<Node*>st;
    Node* node = root;
    while(true)
    {
        if(node != NULL)
        {
            st.push(node);
            if(node->right != NULL)
            {

            }
            else if(node->left != NULL)
            {

            }
        }
    }
}


/*Striver Logic: So, for postorder, the traversal is left right root. So, for that.. */