class Solution {
public:
    int max(int a, int b){
        if(a>b){
            return a;
        }
        return b;
    }
    
    
    int maxSubArray(vector<int>& nums) {
        int sum = 0; 
        int maxr = nums[0];
        for(auto num : nums){
            sum = sum + num;
            maxr = max(sum, maxr);
            if(sum < 0){
                sum = 0;
            }
        }
        return maxr;
    }
};


// 209 / 209 test cases passed.
// Status: Accepted
// Runtime: 174 ms
// Memory Usage: 67.8 MB
