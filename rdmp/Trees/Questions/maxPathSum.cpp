//We need to find the path whose sum will be largest. 
//We can use the same logic from Max Depth of a BT.

int maxS = 0;
int MPS(Node* root, int maxS)
{
    if(root == NULL) return 0;
    int leftSum = MPS(root->left, maxS);
    int rightSum = MPS(root->right, maxS);
    maxS = max(maxS, (root->data + leftSum + rightSum));
    return (root->value + max(leftSum,rightSum));
}