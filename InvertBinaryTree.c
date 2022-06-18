/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


struct TreeNode* invertTree(struct TreeNode* root){
    struct TreeNode* ret = root;
    if(!root){
        return NULL;
    }
    struct TreeNode* temp = root -> left;
    root->left = root -> right;
    root->right = temp;
    invertTree(root->left);
    invertTree(root->right);
    return ret;
}

// 77 / 77 test cases passed.
// Status: Accepted
// Runtime: 0 ms
// Memory Usage: 6 MB
