/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


struct TreeNode* mergeTrees(struct TreeNode* root1, struct TreeNode* root2){
    if(!root1){
        return root2;
    }
    if(!root2){
        return root1;
    }
    struct TreeNode *res =(struct TreeNode*)malloc(sizeof(struct TreeNode));
    res -> val = root1 -> val + root2 -> val;
    res -> left = mergeTrees(root1 -> left, root2 -> left);
    res -> right = mergeTrees(root1 -> right, root2 -> right);
    
    return res;
}


// 182 / 182 test cases passed.
// Status: Accepted
// Runtime: 33 ms
// Memory Usage: 19.8 MB
//Time Complexity = O(min(m,n))
//Space Complexity = O(min(m, n))
