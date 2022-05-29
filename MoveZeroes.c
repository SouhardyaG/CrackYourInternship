void moveZeroes(int* nums, int numsSize){
    int k = 0;
    for(int i = 0 ; i < numsSize; i++){
        if(nums[i] != 0){
            nums[k++] = nums[i];
        }
    }
    for(int i = k; i < numsSize; i++){
        nums[i] = 0;
    }  
}

// 74 / 74 test cases passed.
// Status: Accepted
// Runtime: 214 ms
// Memory Usage: 15.3 MB
