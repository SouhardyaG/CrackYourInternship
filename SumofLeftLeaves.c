/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int sumOfLeftLeaves(struct TreeNode* root){
    if(root)
    {
        if(root->left && !root->left->left && !root->left->right){
            return root->left->val + sumOfLeftLeaves(root->left) + sumOfLeftLeaves(root->right);
        }
        return sumOfLeftLeaves(root->left) + sumOfLeftLeaves(root->right);
    }
    return 0;

}


// 100 / 100 test cases passed.
// Status: Accepted
// Runtime: 3 ms
// Memory Usage: 6.2 MB
