

int maximumProduct(int* nums, int numsSize){
    int min1 = INT_MAX;
    int min2 = INT_MAX;
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    int max3 = INT_MIN;
    for(int i = 0; i < numsSize; i++){
        if (nums[i] <= min1) {
            min2 = min1;
            min1 = nums[i];
        } 
        else if (nums[i] <= min2) 
        {    
            min2 = nums[i];
        }
        if (nums[i] >= max1)
        {            
            max3 = max2;
            max2 = max1;
            max1 = nums[i];
        } 
        else if (nums[i] >= max2)
        {     
            max3 = max2;
            max2 = nums[i];
        }
        else if (nums[i] >= max3)
        {    
            max3 = nums[i];
        }
    }
    int product1 = (max1 * max2 * max3);
    int product2 = (max1 * min1 * min2);
    
    if(product1 > product2){
        return product1;
    }
    else{
        return product2;
    }
}

// 92 / 92 test cases passed.
// Status: Accepted
// Runtime: 40 ms
// Memory Usage: 7.2 MB
