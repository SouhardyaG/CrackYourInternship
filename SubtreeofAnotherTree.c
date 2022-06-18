/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool areIdentical(struct TreeNode* root1, struct TreeNode *root2){
    if(root1 == NULL && root2 == NULL){
        return true;
    }
    else if(root1 == NULL || root2 == NULL){
        return false;
    }
    if((root1 -> val == root2 -> val) && (areIdentical(root1 -> left, root2 -> left)) && (areIdentical(root1 -> right, root2 -> right))){
        return true;
    }
    return false;
}

bool isSubtree(struct TreeNode* root, struct TreeNode* subRoot){
    if(!subRoot){
        return true;
    }
    if(!root){
        return false;
    }
    if(areIdentical(root, subRoot)){
        return true;
    }
    
    return (isSubtree(root->left, subRoot) || isSubtree(root -> right, subRoot));
    
}


// 182 / 182 test cases passed.
// Status: Accepted
// Runtime: 23 ms
// Memory Usage: 11.2 MB
