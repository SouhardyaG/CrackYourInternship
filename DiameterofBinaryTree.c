/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int max(int a, int b){
    if(a>b){
        return a;
    }
    return b;
}

int height(struct TreeNode* node){
    if(node == NULL){
        return 0;
    }
    return 1+ max(height(node->left), height(node->right));
}

int diameterOfBinaryTree(struct TreeNode* root){
    if(root == NULL){
        return 0;
    }
    int lheight = height(root->left);
    int rheight = height(root->right);
    
    int ldiameter = diameterOfBinaryTree(root->left);
    int rdiameter = diameterOfBinaryTree(root->right);
    
    return max((lheight+rheight), max(ldiameter,rdiameter));
    
}

// 104 / 104 test cases passed.
// Status: Accepted
// Runtime: 28 ms
// Memory Usage: 8.2 MB
