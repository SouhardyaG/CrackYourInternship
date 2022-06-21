/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


bool isSameTree(struct TreeNode* p, struct TreeNode* q){
    if(!p && !q){
        return true;
    }
    if(!p || !q || p -> val != q -> val){
        return false;
    }
    return isSameTree(p -> left, q -> left) && isSameTree(p -> right, q -> right);
}


// 60 / 60 test cases passed.
// Status: Accepted
// Runtime: 0 ms
// Memory Usage: 5.6 MB
