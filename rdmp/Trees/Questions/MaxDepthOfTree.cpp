// We have to find the max height of a binary search tree
// Main logic : Recursive....   1 + max(left,right)


int maxDepth(Node* root)
{
    if(root == NULL) return 0;
    int leftHeight = 1 + maxDepth(root->left);
    int rightHeight = 1 + maxDepth(root->right);

    return 1 + max(leftHeight,rightHeight);
}

// We can also do this with level order traversal by using a queue instead but it will take extra space complexity of O(n)
//tbh, even revursive way can take the extra space c of O(n), but that will happen only if the tree is a skewed tree, which is super rare.