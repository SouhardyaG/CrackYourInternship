void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void sortColors(int* nums, int numsSize){
    int start = 0, mid = 0;
    int end = numsSize-1;
    
    while(mid <= end){
        switch(nums[mid]){
            case 0:
                swap(&nums[start++], &nums[mid++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(&nums[mid], &nums[end--]);
                break;
        }
    }
}


// 87 / 87 test cases passed.
// Status: Accepted
// Runtime: 2 ms
// Memory Usage: 5.9 MB
