/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int n, int* returnSize){
    *returnSize = n+1;
    int* mem = (int*) calloc((*returnSize), sizeof(int));
    mem[0] = 0;
    for(int i = 1; i <= n; i++){
        mem[i] = mem[i/2] + i%2;
    }
    return mem;
}


// 15 / 15 test cases passed.
// Status: Accepted
// Runtime: 63 ms
// Memory Usage: 10.7 MB
