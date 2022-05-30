class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> index_map;

        for (int index = 0;; index++) {
            auto iter = index_map.find(target - nums[index]);

            if (iter != index_map.end())
                return vector<int> {index, iter -> second};

            index_map[nums[index]] = index;
        }        
    }
};

// 57 / 57 test cases passed.
// Status: Accepted
// Runtime: 19 ms
// Memory Usage: 10.9 MB
