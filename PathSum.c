/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


bool hasPathSum(struct TreeNode* root, int targetSum){
    if(!root){
        return false;
    }
    int ans = 0;
    int subsum = targetSum - root->val;
    
    if(subsum == 0 && !root->left && !root->right){
        return true;
    }
    
    if(root -> left){
        ans = ans || hasPathSum(root -> left, subsum);
    }
    if(root->right){
        ans = ans || hasPathSum(root -> right,subsum);
    }
    return ans;
}


// 117 / 117 test cases passed.
// Status: Accepted
// Runtime: 14 ms
// Memory Usage: 8.2 MB
