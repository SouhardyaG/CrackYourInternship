int minMoves(int* nums, int numsSize){
    int total = 0 ; 
    int smallest = INT_MAX;
    for(int i = 0 ; i < numsSize; i++){
        total += nums[i];
        if(nums[i] < smallest){
            smallest = nums[i];
        }
    }
    return total - numsSize * smallest;
}


// 84 / 84 test cases passed.
// Status: Accepted
// Runtime: 42 ms
// Memory Usage: 7.1 MB
