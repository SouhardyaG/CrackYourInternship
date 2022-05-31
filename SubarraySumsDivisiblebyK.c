class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int len = nums.size();
        unordered_map<int, int> ht;

        int accu_sum = 0;
        int count = 0;
        int modulo;
        ht[0] = 1;
        for (int i = 0; i < len; i ++) {
            accu_sum += nums[i];
            modulo = accu_sum % k;
            if (modulo < 0)
                modulo += k;
            if (ht.find(modulo) == ht.end()) {
                ht[modulo] = 0;
            }
            count += ht[modulo];
            ht[modulo] ++;
        }
        return count;
    }
};

// 73 / 73 test cases passed.
// Status: Accepted
// Runtime: 84 ms
// Memory Usage: 31.6 MB
