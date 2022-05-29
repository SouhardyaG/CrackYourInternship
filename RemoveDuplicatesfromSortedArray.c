int removeDuplicates(int* nums, int numsSize){
    if(numsSize == 0 || numsSize == 1){
        return numsSize;
    }
    int j = 0;
    int expectedNums[numsSize];
    for(int i = 0 ; i  < numsSize-1; i++){
        if (nums[i] != nums[i+1]){
            expectedNums [j] = nums[i];
            j++;
        }
    }
        expectedNums[j++] = nums[numsSize-1];
    for(int i = 0 ; i < j; i++){
        nums[i] = expectedNums[i];
    }
    return j;
}


// 361 / 361 test cases passed.
// Status: Accepted
// Runtime: 24 ms
// Memory Usage: 7.7 MB
