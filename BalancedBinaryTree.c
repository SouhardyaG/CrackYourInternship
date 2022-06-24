/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int max(int a, int b) {
    if(a > b){
        return a;
    }
    return b;
}


int height(struct TreeNode* root) {
    if (root == NULL){
        return 0;
    }
    return 1 + max(height(root->left), height(root->right));
}

bool isBalanced(struct TreeNode* root){
    if (root == NULL){
        return 1;
    }
    int leftheight = height(root->left);
    int rightheight = height(root->right);
    return abs(leftheight - rightheight) <= 1 && isBalanced(root->left) && isBalanced(root->right);
}


// 228 / 228 test cases passed.
// Status: Accepted
// Runtime: 12 ms
// Memory Usage: 9.1 MB
