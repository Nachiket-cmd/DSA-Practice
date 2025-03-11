/*Check if a tree is a balanced tree or not. 
Balanced BT ->  for every node: height(left) - height(right) <= 1*/

/*We can simply use the last logic of finding the max height of a BT.*/

int isBalanced(Node* root)
{
   if(root == NULL) return 0;

   int lh = isBalanced(node->left);
   if(lh == -1) return -1;  //If there will be any node whose tree is not balanced in left. It will automatically make the entire tree unbalanced.So no need to check further.

   int rh = isBalanced(node->right);
   if(rh == -1) return -1;  //If there will be any node whose tree is not balanced in right. It will automatically make the entire tree unbalanced.So no need to check further.

   return max(lh,rh) + 1;
}

int main()
using namespace std;
{
    if(isBalanced == -1) cout<<"Tree is unbalanced";
    else cout<<"Tree is Balanced";

    return 0;
}