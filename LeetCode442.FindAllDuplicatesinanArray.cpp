class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>res;
        int n = nums.size();
        for(auto it : nums){
            int index = abs(it) - 1;
            if(nums[index] < 0){
                res.push_back(index+1);
            }
            else{
                nums[index] = -nums[index];
            }
        }
        return res;
    }
};


// 28 / 28 test cases passed.
// Status: Accepted
// Runtime: 80 ms
// Memory Usage: 33.6 MB
