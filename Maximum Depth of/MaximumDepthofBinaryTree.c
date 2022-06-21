/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


int maxDepth(struct TreeNode* node){
    if (node == NULL)
        return 0;
    else
    {
        int lDepth = maxDepth(node->left);
        int rDepth = maxDepth(node->right);
     
        if (lDepth > rDepth){
            return(lDepth + 1);
        }
        else{
            return(rDepth + 1);
        }
    }
}


// 39 / 39 test cases passed.
// Status: Accepted
// Runtime: 18 ms
// Memory Usage: 8.2 MB
