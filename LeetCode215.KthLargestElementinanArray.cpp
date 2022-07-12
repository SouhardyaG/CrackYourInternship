class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end(), greater<int>());
        return nums[k-1];
    }
};


// 32 / 32 test cases passed.
// Status: Accepted
// Runtime: 21 ms
// Memory Usage: 10.1 MB
