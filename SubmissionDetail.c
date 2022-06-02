int missingNumber(int* nums, int numsSize){
    int i, total;
    total = (numsSize + 1) * (numsSize ) / 2;
    for (i = 0; i < numsSize; i++){
        total -= nums[i];
    }
    return total;
}


// 122 / 122 test cases passed.
// Status: Accepted
// Runtime: 16 ms
// Memory Usage: 6.5 MB
