int maxProduct(int* nums, int n){
    int maxp = INT_MIN;
    int product = 1;
    for(int i = 0; i < n; i++){
        product *= nums[i];
        if(maxp < product){
            maxp = product;
        }
        if(product == 0){
            product = 1;
        }
    }
    product = 1;
    for(int i = n-1; i > 0; i--){
        product *= nums[i];
        if(maxp < product){
            maxp = product;
        }
        if(product == 0){
            product = 1;
        }
    }
    return maxp;
}



// 188 / 188 test cases passed.
// Status: Accepted
// Runtime: 5 ms
// Memory Usage: 6.5 MB
