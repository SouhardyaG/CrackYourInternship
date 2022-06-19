/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int rangeSumBST(struct TreeNode* root, int low, int high){
    if (root == NULL) {
        return 0;
    }
    int result = 0;
    if(low <= root -> val && root->val <= high){
        result = result + root->val;
    }
    result += rangeSumBST(root->left, low, high);
    result += rangeSumBST(root->right, low, high); 
    return result;
}


// 41 / 41 test cases passed.
// Status: Accepted
// Runtime: 109 ms
// Memory Usage: 42.3 MB
