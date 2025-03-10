//We can traverse pre, in and post order all at once in one traversal in 2 ways. 

// 1. Recursive 

void allInOneTraversal(Node* root, vector<int>&pre, vector<int>&in, vector<int>&post)
{
  if(root == NULL) return;
  Node* node = root;
  pre.push_back(node->data);
  allInOneTraversal(node->left,pre,in,post);
  in.push_back(node->data);
  allInOneTraversal(node->right,pre,in,post);
  post.push_back(node->data);  
}



//Iterative 

vector<int> trav(Node* root) {
    if(root == NULL) return -1;
    stack<Node*,int>st;
    st.push({root,1});
    vector<int>pre,in,post;
    while(!st.empty())
    {
       int check = st.top();
       st.pop();
       if(check.second == 1) {
        pre.push_back(check.first->data);
        check.second++;
        st.push(check);

        if(check.first->left != NULL) 
        {
            st.push({it.first->left, 1});
        }
       }

       else if(check.second == 2) {
          in.push_back(check.first->data);
          check.second++;
          st.push(check);

          if(check.first->right != NULL)
          {
            st.push({it.first->right, 1});
          }
       }

       else {
            post.push_back(check.first->data);
       }
    }
}

