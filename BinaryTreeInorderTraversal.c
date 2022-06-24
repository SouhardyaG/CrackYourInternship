/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

void storeInOrder(struct TreeNode* root, int* array, int *index) {       
    if(root == NULL){
        return;
    }

    storeInOrder(root -> left, array, index);       
    array[(*index)++] = root -> val;
    storeInOrder(root -> right, array, index);
}

int* inorderTraversal(struct TreeNode* root, int* returnSize){
    int* array;
    *returnSize = 0;
    array = (int*)malloc(100 * (sizeof(int)));
    storeInOrder(root, array, returnSize);
    return array;
}


// 70 / 70 test cases passed.
// Status: Accepted
// Runtime: 4 ms
// Memory Usage: 6.1 MB
