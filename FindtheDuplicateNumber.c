//using hashtable
int findDuplicate(int* nums, int numsSize){
    for (int i = 0; i < numsSize; i++) {
        nums[nums[i] % numsSize]
            = nums[nums[i] % numsSize] + numsSize;
    }
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] >= numsSize * 2) {
            return i;
        }
    }
    return -1;
}
// Runtime: 128 ms
// Memory Usage: 11.9 MB


//using another array(calloc)
int findDuplicate(int* nums, int numsSize){
    int *arr=(int*)calloc(numsSize,sizeof(int));
    for(int i=0;i<numsSize;i++){
        if(arr[nums[i]]==1){
            return nums[i];
        }else{
            arr[nums[i]]=1;
        }
    }
    return 0;
}
// Runtime: 84 ms
// Memory Usage: 14.4 MB
